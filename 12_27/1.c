//#include<stdio.h>
//int main()
//{
//	int arr[5] = {1,2,3,4,5};
//	int (*pa)[5]=&arr;
//	printf("%p\n",pa);
//	printf("%p\n", &arr);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char *arr[5];
//	char *(*parr)[5]=&arr;
//	return 0;
//}
//����ָ���ʹ��

//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*parr)[10]=&arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t",(*parr)[i]);
//	}
//	return 0;
//}

//����ָ�����ڶ�ά����֮��

//#include<stdio.h>
//void print(int *arr, int x, int y)
//{
//	int i, j;
//	for (i = 0; i < x;i++)
//	{
//		for (j = 0; j < y;j++)
//		{
//			printf("%*d",-3,arr[i]+j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	print(arr,3,5);
//	return 0;
//}

#include<stdio.h>
void print(int (*pa)[5], int x, int y)//����һ�еĵ�ַ,һ��Ϊһ��һά���飬����������ָ�����
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%*d", -3, *(*((pa+i))+j));//��һ��������е����ã��ڶ������е�����
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print(arr, 3, 5);//��άָ�����鴫����Ԫ�ص�ַ==һ�еĵ�ַ
	return 0;
}














