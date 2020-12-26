////指针数组
//#include<stdio.h>
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,10};
//	int arr3[] = {11,12,14,13,15};
//	int *parr[] = {arr1,arr2,arr3};//指针数组，用于存放指针--这里用来存放首元素地址
//	int i,sz=sizeof(arr1)/sizeof(arr1[0]);
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < sz; j++)
//		{
//			printf("%*d",-3, *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}