#define _CRT_SECURE_NO_WARNINGS 1
//指针数组--数组--存放指针的数组
#include<stdio.h>
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = {&a,&b,&c};
	int i;
	for (i = 0; i < 3;i++)
	{
		printf("arr[%d]=%p\n",i,&arr[i]);
		printf("arr[%d]=%d\n",i,*(arr[i]));
	}
	return 0; 
}