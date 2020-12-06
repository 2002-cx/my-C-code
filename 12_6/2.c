//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
//////野指针
////int main()
////{
////	//int *p;
////	//*p = 29;
////	int arr[10] = {0};
////	int i = 0;
////	int *p = &arr;
////	for (i = 0; i < 11; i++)
////	{
////		*(p + i) = 1;
////	}
////	return 0;
////}
//
////指针加减运算
////指针+-整数
////指针-执政
//
//
////#include<stdio.h>
////int main()
////{
////	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
////	int *p = arr;
////	int i;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (i = 0; i < sz; i++)
////	{
////		printf("arr[%d]=%p\n",i,p);
////		p += 1;//指针+整数
////	}
////	return 0;
////}
//
////指针-指针=中间元素的个数
////#include<math.h>
////#include<stdio.h>
////int main()
////{
////	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
////	printf("%d\n",abs(&arr[0]-&arr[9]));//指针-指针
////	return 0;
////}
//
////利用指针，实现strlen（）
//#include<stdio.h>
//int my_strlen(char *str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针-指针
//}
//int main()
//{
//	char ch[] = "hahah";
//	int len =my_strlen(ch);//首元素地址
//	printf("%d\n",len);
//	return 0;
//}