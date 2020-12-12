//指针
//#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *p=&a;
//	char *pp = &a;
//	double *ppp = &a;
//	printf("%p\n",p);
//	printf("%p\n",p+1);
//	
//	printf("%p\n", pp);
//	printf("%p\n", pp+1);
//
//	printf("%p\n",ppp);
//	printf("%p\n",ppp+1);
//	return 0;
//}

//未初始化的指针
//#include<stdio.h>
//int main()
//{
//	int *p;
//	*p = 20;
//	return 0;
//}


#include<stdio.h>
int main()
{
	int i;
	int arr[10] = {0};
	
	for (i = 0; i < 12; i++)
	{
		int *p = arr+i;
	}
	return 0;
}












