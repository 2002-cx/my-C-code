//函数指针--指向函数的指针（本质为指针）
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a=11, b=22;
//	int Sum=Add(a,b);
//	printf("Sum is %d\n",Sum);
//	printf("ID of Add is %p\n",&Add);//打印函数的地址
//	printf("ID of Add is %p\n", Add);//&Add==Add----&函数名和函数名都是函数地址
//	
//	//函数指针
//	int (*Pa)(int,int)=Add;
//	//int(*Pa)(int, int) = &Add;//等价
//	printf("%d\n",(*Pa)(33, 44));//利用指针，调用函数
//	return 0;
//
//}


//#include<stdio.h>
//void Print(char *str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*pp)(char *)=Print;
//	(*pp)("abcd");
//	Print("acc");
//	return 0;
//}

//#include<stdio.h>
//void Print()
//{
//	printf("哈哈\n");
//}
//int main()
//{
//	void (*)() = &Print;
//	(*(void (*)())0)();
//	return 0;
//}

//-:有趣代码
//(*(void (*)())0)();----将void(*)()类型，强制类型转换给0，然后再解引用--(*)()

////二：有趣代码
////函数类型为void(*)(int)---里面参数类型为((int),(void(*)(int)))
////void(*signal(int, void((*)(int))))(int)
//
////简单化：使用typedef 对类型名重命名
//void(*fun(void(*)(int), int))	(int);
////解释：该函数有两个参数，一个参数类型为int,另一个类型为-函数指针void(*)(int)-函数指针中指向的参数为int类型
////signal()--函数的返回类型为-函数指针void(*)(int)
//typedef void(* fun_t)(int);
////优化后
//fun_t signal(fun_t,int)


#include<stdio.h>
int Add(int x,int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10, b = 20;
	Add(a, b);
	int (*pa)(int,int)=Add;
	printf("%d\n",Add(a,b));//30
	printf("%d\n", (*pa)(a, b));//30利用指针对函数指针解引用
	printf("%d\n", (**pa)(a, b));//30--说明加多少星号都没用-即-星号可省略
	printf("%d\n", (***pa)(a, b));//30
	printf("%d\n", pa(a, b));
	return 0;
}