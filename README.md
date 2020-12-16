# my-C-code
daily-C-code
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//二维数组分别求两边对角线之和
//int main()
//{
//	int arr[3][3] = { {1,2,3}, {1,2,3}, {4,5,6} };
//	int i,j,sum1=0,sum2=0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%2d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//	{
//		sum1+=arr[i][i] ;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		sum2 += arr[i][2-i];
//	}
//	printf("sum1=%d\nsum2=%d\n",sum1,sum2);
//	return 0;//[0][2]	[1][1]	[2][0]----[i][2-i]
//}			//[0][0]	[1][1]	[2][2]

//输出前9行的杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//#include<stdio.h>
//int main()
//{
//	int arr[9][9];
//	int i, j;
//	for (i = 0; i < 9;i++)
//	{
//		for (j = 0; j < 9; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][0] = 1;
//				arr[i][i] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[9][9];
//	int i, j;
//	for (i = 0; i < 9; i++)
//	{
//			arr[i][0] = 1;
//			arr[i][i] = 1;
//	}
//	for (i = 2; i < 9; i++)
//	{
//		for (j = 1; j <=i-1; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%-3d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return;
//}

//二维数组创建四行五列的数据--分别求两边对角线的和
//#include<stdio.h>
//int main()
//{
//	int arr[5][5] = { {1,5,9,7,5},{ 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 2, 3, 5, 2 }, { 12, 13, 15, 12, 11 } };
//	int sum=0,sum1=0,i,j;
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i][i];
//		sum1 += arr[i][4 - i];
//	}
//	printf("sum=%d\nsum1=%d\n",sum,sum1);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5;j++)
//		{
//			printf("%-3d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//使用二维数组创建一个三行五列的数组，求数组的最大值		
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {6,7,8,9,110}, {87,11,22,13,45} };
//	int i, j;
//	int max;
//	max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}
