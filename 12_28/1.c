//����ָ��--ָ������ָ�루����Ϊָ�룩
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
//	printf("ID of Add is %p\n",&Add);//��ӡ�����ĵ�ַ
//	printf("ID of Add is %p\n", Add);//&Add==Add----&�������ͺ��������Ǻ�����ַ
//	
//	//����ָ��
//	int (*Pa)(int,int)=Add;
//	//int(*Pa)(int, int) = &Add;//�ȼ�
//	printf("%d\n",(*Pa)(33, 44));//����ָ�룬���ú���
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
//	printf("����\n");
//}
//int main()
//{
//	void (*)() = &Print;
//	(*(void (*)())0)();
//	return 0;
//}

//-:��Ȥ����
//(*(void (*)())0)();----��void(*)()���ͣ�ǿ������ת����0��Ȼ���ٽ�����--(*)()

////������Ȥ����
////��������Ϊvoid(*)(int)---�����������Ϊ((int),(void(*)(int)))
////void(*signal(int, void((*)(int))))(int)
//
////�򵥻���ʹ��typedef ��������������
//void(*fun(void(*)(int), int))	(int);
////���ͣ��ú���������������һ����������Ϊint,��һ������Ϊ-����ָ��void(*)(int)-����ָ����ָ��Ĳ���Ϊint����
////signal()--�����ķ�������Ϊ-����ָ��void(*)(int)
//typedef void(* fun_t)(int);
////�Ż���
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
	printf("%d\n", (*pa)(a, b));//30����ָ��Ժ���ָ�������
	printf("%d\n", (**pa)(a, b));//30--˵���Ӷ����ǺŶ�û��-��-�Ǻſ�ʡ��
	printf("%d\n", (***pa)(a, b));//30
	printf("%d\n", pa(a, b));
	return 0;
}