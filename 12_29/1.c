////1:利用switch语句实现
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//	printf("************************\n");
//	printf("************************\n");
//	printf("**1:Add	2:Mul**\n");
//	printf("**3:Div	4:Sub**			\n");
//	printf("**0:exit**				\n");
//	printf("************************\n");
//	printf("************************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input;
//	do
//	{
//		int x, y;
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			Sub(x, y);
//			break;
//		case 3:
//			printf("请输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			Mul(x,y);
//			break;
//		case 4:
//			printf("请输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			Div(x, y);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误！\n请重新选择：\n");
//			break;
//		}
//		
//	} while(input);
//	return 0;
//}
//
//

//2：利用函数指针数组实现
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("**	1:Add	2:Mul		**\n");
//	printf("**	3:Sub	4:Div		**\n");
//	printf("**		0:exit		**\n");
//	printf("********************************\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		int(*ca[])(int, int) = { 0, Add, Mul, Sub, Div };
//		if (input >= 1 && input <= 4)
//		{
//			int x, y;
//			printf("请输入两个数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", ca[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误!\n");
//		}
//	} while (input);
//	return 0;
//
//}

#include<stdio.h>
int main()
{

	int x = 5;
	int b = 2 + x++;
	printf("%d",b);
	return 0;

}