////数组指针--是指针
//#include<stdio.h>
//int main()
//{
//	int *a = NULL;//整形指针
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main(void)
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("\t\t\t请注意：你小子的电脑将会在一分钟之内关机！\n\t\t\t如果输入“我是猪”就放你一马！\n");
	printf("输吧：");
again:
	printf("再给你一次机会："); 
	scanf("%s",&input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}