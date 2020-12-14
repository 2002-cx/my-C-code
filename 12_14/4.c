#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//参数是数组形式
void print(int arr[3][5], int x, int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

//参数是指针的形式
void print1(int(*pa)[5], int x, int y)
{
	int a, b;
	for (a = 0; a < x; a++)
	{
		for (b = 0; b < y;b++)
		{
			printf("%d ",(*(pa+a))[b]);
			//printf("%d ", *((*pa + a) + b));//对首字母地址解引用加行和列
		}
		printf("\n");
	}

}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
	print(arr, 3, 5);
	print1(arr, 3, 5);
	return 0;
}