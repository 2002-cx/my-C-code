#define _CRT_SECURE_NO_WARNINGS 1
//计算一个住户一年的煤气费用总和（每月煤气费由键盘输入）
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float month = 0.0;
//	float yearmoney = 0.0;
//	printf("请输入每个月的水电费：");
//	while (i <= 12)
//	{
//		scanf("%f", &month);
//		yearmoney += month;
//		i++;
//	}
//	printf("yearmoney=%0.2f", yearmoney);
//
//	return 0;
//}

//计算10！
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int mul = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		mul *= i;
//	}
//	printf("mul=%d\n",mul);
//}


//计算每月煤气费用超过10块的有几个月
//#include<stdio.h>
//int main()
//{
//	int m = 1,n=0;
//	float money = 0.0,sum=0.0;
//	for (m = 1; m <= 12; m++)
//	{
//		scanf("%f", &money);
//		if (money > 10)
//		{
//			n++;
//		}
//		sum += money;
//	}
//	printf("sum=%0.2f\n",sum);
//	printf("每月煤气费用超过10块的有%d个月\n",n);
//	return 0;
//}

//输入两个数，数据之和为5的倍数，则输掉游戏：如果赢，就接着输入数据
//#include<stdio.h>
//void menu()
//{
//	printf("*****************************************************************\n");
//	printf("*****************************************************************\n");
//	printf("输入两个数，数据之和为5的倍数，则输掉游戏：如果赢，就接着输入数据\n");
//	printf("***************************1:play   0:exit***********************\n");
//	printf("*****************************************************************\n");
//	printf("*****************************************************************\n");
//	printf("*****************************************************************\n");
//}
//void game()
//{
//	while (1)
//	{
//		int input1, input2;
//		printf("请输入两个数：");
//		scanf("%d%d",&input1,&input2);
//		if ((input1 + input2) % 5 == 0)
//		{
//			printf("game over\n");
//			break;
//		}
//		else
//			printf("you win,continue\n");
//	}
//}
//void test()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入有误！请重新输入\n");
//			break;
//
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}



#include<stdio.h>
int main()
{
	int i = 1,sum=0;
	while(sum<1000)
	{
		sum += i*i;
		printf("sum=%d\ti=%d\n",sum,i);
		i++;
	}
	return 0;
}
















