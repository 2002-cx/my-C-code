#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������������ʽ
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

//������ָ�����ʽ
void print1(int(*pa)[5], int x, int y)
{
	int a, b;
	for (a = 0; a < x; a++)
	{
		for (b = 0; b < y;b++)
		{
			printf("%d ",(*(pa+a))[b]);
			//printf("%d ", *((*pa + a) + b));//������ĸ��ַ�����ü��к���
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