#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *p=&a;//p为指针变量，类型为int * 
//	printf("%p\n",p);
//	printf("%p\n",&a);
//	//printf("%p\n",*p);
//	return 0;
//}

//#include<stdio.h>
////指针类型决定了指针加的字节的大小
////指针类型决定了指针走一步走多大距离
////int *p   p+1->4个字节
////char *p   p+1->1个字节
////double *p   p+1->8个字节
////short *p   p+1->2个字节
//int main()
//{
//	int a = 0x11223344;
//	int *pa=&a;
//	char *pc = &a;
//	short *pd = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);//整形指针+1，一次加4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//字符指针+1，一次加1个字节
//
//	printf("%p\n",pd);
//	printf("%p\n",pd+1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	printf("%d\n",arr[5]);
//	return 0;
//}