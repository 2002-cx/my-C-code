#define _CRT_SECURE_NO_WARNINGS 1
//���һ�������жϵ������Ǵ�˴洢������С�˴洢
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char *p = (char *)&n;
//	if (*p== 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�Զ��庯����check_sys()��С�˷���1����˷���0
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}