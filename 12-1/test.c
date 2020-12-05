#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("*********************\n"); 
	printf("****1:play 0:exit****\n");
	printf("*********************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择:");
			break;
		}
	} while (input);
}
int main()
{
	void test();
	return 0;
}