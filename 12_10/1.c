#define _CRT_SECURE_NO_WARNINGS 1
//设计一个程序判断电脑上是大端存储，还是小端存储
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char *p = (char *)&n;
//	if (*p== 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//自定义函数，check_sys()，小端返回1，大端返回0
#include<stdio.h>
int check_sys()
{
	int i;
	scanf("%d",&i);
	char *p=(char*)&i;
	if (*p == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int ret=check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}