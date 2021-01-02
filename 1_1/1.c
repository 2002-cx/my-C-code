//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int a, b;
//	for (a = 0; a < sz - 1; a++)
//	{
//		//整个冒泡排序的趟数，为sz-i趟
//		for (b = 0; b < sz - 1 - a;b++)
//		{
//			//有几对
//			if (arr[b]>arr[b + 1])
//			{
//				int temp = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0},sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int *a[2] ;
//	int *(*pa)[2]=&a;
//	int *(*ppa[2]) =&pa;
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pa)(int ,int)=Add;//函数指针
//	int (*ppa[10])(int, int) = &pa;//函数指针数组
//	int (*(*pppa)[10])(int, int) = &ppa;//指向函数指针数组的指针
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2 };
//	printf("%d\n",sizeof(arr[0]));//一个元素的大小，单位|字节
//	return 0;
//}