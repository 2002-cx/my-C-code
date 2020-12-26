//#include<stdio.h>
//int main()
//{
//	//32位平台上默认为4个字节
//	printf("%d\n",sizeof(int *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(float *));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//64位平台上默认为8个字节
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(float *));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a=0x11223344;
//	int *pa = &a;
//	//*pa = 0;
//	char *pb = &a;
//	*pb = 0;
//
//	printf("%p\n",pb);
//	//printf("%p\n", pb);
//	return 0;
//}
//指针+-整数的意义，不同类型的指针，直接影响着加减整数向后跳几个字节
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pb = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);//因为pa是int 类型，所以加1，向后跳4个字节
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);//因为pb是char 类型，所以加1，向后跳1个字节 
//	return 0;
//}

////把一个整形数组中的元素全部改成1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int *pa=arr;//arr--首元素的地址
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

////野指针--大错特错的代码
//#include<stdio.h>
//int *test()
//{
//	int a = 10;
//	return &a;//int a为局部变量--一出函数，就会被销毁
//}
//int main()
//{
//	int *p=test();//返回的地址不再指向a
//	printf("%d\n",*p);//解引用回去，也找不到原来的a了 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int *p ;	//如果一个指针没有初始化--则默认指向一个随机值
//	char *pa = NULL;//如果指针不知道初始化为什么的话，就赋值为空指针
//	return 0;
//}
//
//#define NULL 0
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	pa = NULL;//如果不想用pa这个指针了，则赋为空指针
//	return 0;
//}

//指针运算
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i,sz=sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//1:printf("%d\t",*(p+i));
//		//2:printf("%d\t",*p);
//		//p++;
//
//		//3:printf("%d\t",*p);
//		//p = p + 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = &arr[9];
//	int i, sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < ; i++)
//	{
//		printf("%d\t",*p);
//		p -= 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//#define N_Values 5
////将arr数组依次赋值为1；
//int main()
//{
//	int arr[N_Values];
//	int *vp=&arr[0];
//	for (vp = &arr[0]; vp < &arr[N_Values];)//指针关系运算
//	{
//		*vp++=1;
//	}
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>//指针-指针
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]),s = &arr[sz-1] - &arr[0];
//	printf("%d\n",s);//指针末尾-指针初=中间元素个数!!相减的类型必须相同
//	return 0;
//}












