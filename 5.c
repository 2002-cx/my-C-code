#define _CRT_SECURE_NO_WARNINGS 1
/*1、输入1，1，2，3，5，8序列的前20项。
输出格式为：
f(1)=1
f(2)=1
f(3)=2
*/
//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 1,1 };
//	int i;
//	printf("f(1)=1\n");
//	printf("f(2)=1\n");
//	for (i = 3; i <= 20; i++)
//	{	
//		if (i >= 3)
//		{
//			arr[i-1] = arr[i - 3] + arr[i - 2];
//			printf("f(%d)=%d\n", i, arr[i-1]);
//		}
//	}
//	return 0;
//}

/*2、将一个数组中的值逆序存放。例如：原来的顺序为1,2,3,4,5，重新存放的顺序为5,4,3,2,1。
要求：数组中有9个元素。
*/
//#include<stdio.h>
//int main()
//{
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int i,temp=0;
//		for (i = 1; i <= 4; i++)
//		{
//			if (arr[i - 1] < arr[9 - i])
//			{
//				temp = arr[9 - i];
//				arr[9 - i] = arr[i - 1];
//				arr[i - 1] = temp;
//				
//			}
//		}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

/*3、在一个升序数组中插入一个数，使数组仍然保持升序排序。!!!!!!!!!!!!!!!!!*/
#include<stdio.h>
int main()
{
	int arr[6] = {1,3,4,8,15};
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < 6; i++)
	{
		if (n<arr[i])
		{
			break;
		}
	}
	for (j = 5; j > i; j--)
	{
		arr[j] = arr[j-1];
	}
	arr[j] = n;
	for (i = 0; i <6; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

/*4、统计某班10名同学某门课程的最低分和不及格的人数。*/
//#include<stdio.h>
//int main()
//{
//	int score[10] ;
//	int i,b=0,temp=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&score[i]);
//		if (score[i] < 60)
//		{
//			b++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (score[i] < score[i + 1])
//		{
//			temp = score[i];
//			score[i] = score[i + 1];
//			score[i + 1] = temp;
//		}
//		//printf("%d\n",score[i]);
//	}
//		printf("不及格的有%d人\n",b);
//		printf("最低分为%d分\n",score[9]);
//	return 0;
//}

/*5、定义一个一维数组，从键盘上输入8个整数，将其按从大到小的顺序排列，并将排列后的数组输出。（冒泡排序法）*/
//#include<stdio.h>
//int main()
//{
//	int arr[8];
//	int i, j, temp = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 0; j <=7 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//	return 0;
//}

/*6、由一个协会在换届选举，
由全体会员无记名投票直选主席，共有5名候选人，5个人的代号分别用1-5表示。
每名会员填写一张选票，若同意某名候选人则在其姓名后打钩即可。编写程序，
根据所有选票统计每名候选人所得票数，
其中每张选票上所投候选人的代号由键盘输入，
当输入完所有选票后用0作为终止数据输入的标志。*/
//#include<stdio.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*****1:check  0:exit\n");
//	printf("********************\n");
//}
//void check()
//{
//	int input;
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		} 
//	while (input);
//	{
//			switch (input)
//			{
//			case 1:
//				a++;
//				break;
//			case 2:
//				b++;
//				break;
//			case 3:
//				c++;
//				break;
//			case 4:
//				d++;
//				break;
//			case 5:
//				e++;
//				break;
//		}
//	}
//		printf("%d%d%d%d%d\n",a,b,c,d,e);
//}
//int main()
//{
//	check();
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int check[20] = {0};
//	int i;
//	int a = 0, b = 0, c =0 , d = 0, e = 0,qt=0;
//	for (i = 0; i < 20;i++)
//	{
//		scanf("%d",&check[i]);
//		if (check[i] == 0)
//		{
//			break;
//		}
//		else if (1==check[i])
//		{
//			a++;
//		}
//		else if (2 == check[i])
//		{
//			b++;
//		}
//		else if (3 == check[i])
//		{
//			c++;
//		}
//		else if (4 == check[i])
//		{
//			d++;
//		}
//		else if (5==check[i])
//		{
//			e++;
//		}
//		else
//		{
//			qt++;
//		}
//		}
//	printf("1号得%d票\t2号得%d票\t3号得%d票\t4号得%d票\t5号得%d票\t弃票为%d票\n",a,b,c,d,e,qt);
//	return 0;
//}