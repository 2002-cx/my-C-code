#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("**********************\n");
	printf("** 1��Add 2:Mul     **\n");
	printf("** 3��Div 4:Sub     **\n");
	printf("**	   0:exit		**\n");
	printf("**********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Mul (int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Sub(int x, int y)
{
	return x - y;
}
void Calc(int (*pa)(int,int))
{
	int a, b;
	printf("��������������>");
	scanf("%d%d", &a, &b);
	printf("%d\n", pa(a, b));
}
int main()
{
	int input;
	do
	{
		
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Mul);
			break;
		case 3:
			Calc(Div);
			break;
		case 4:
			Calc(Sub);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
		}
	} while(input);
	return 0;
}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("** 1��Add 2:Mul     **\n");
//	printf("** 3��Div 4:Sub     **\n");
//	printf("**	   0:exit		**\n");
//	printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int input;
//	do
//	{
//		int a, b;
//		int(*pa[])(int, int) = {0,Add,Mul,Div,Sub};
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d%d",&a,&b);
//			printf("%d\n", pa[input](a, b));
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void menu()
//{
//		printf("**********************\n");
//		printf("** 1��Add 2:Mul     **\n");
//		printf("** 3��Div 4:Sub     **\n");
//		printf("**	   0:exit		**\n");
//		printf("**********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int a, b, input;
//	int (*pa[])(int, int) = {0,Add,Mul,Div,Sub};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", pa[input](a,b));
//		}
//		else if (input == 0)
//		{
//			
//			printf("�˳�\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룺\n");
//		}
//
//	} while (input);
//	return 0;
//}