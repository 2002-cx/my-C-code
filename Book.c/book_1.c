#define _CRT_SECURE_NO_WARNINGS 1
//����һ��ס��һ���ú�������ܺͣ�ÿ��ú�����ɼ������룩
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float month = 0.0;
//	float yearmoney = 0.0;
//	printf("������ÿ���µ�ˮ��ѣ�");
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

//����10��
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


//����ÿ��ú�����ó���10����м�����
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
//	printf("ÿ��ú�����ó���10�����%d����\n",n);
//	return 0;
//}

//����������������֮��Ϊ5�ı������������Ϸ�����Ӯ���ͽ�����������
//#include<stdio.h>
//void menu()
//{
//	printf("*****************************************************************\n");
//	printf("*****************************************************************\n");
//	printf("����������������֮��Ϊ5�ı������������Ϸ�����Ӯ���ͽ�����������\n");
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
//		printf("��������������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������������������\n");
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
















