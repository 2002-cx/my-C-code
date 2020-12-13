#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针=中间元素的个数
//	printf("%d\n", abs(&arr[0] - &arr[9]));
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	char ch[5] = {0};
//	printf("%d\n", &arr[9] - &arr[0]);
//	//printf("%d\n", &arr[9] - &ch[0]);		类型不同，不兼容，错误写法!
//	return 0;
//}


//自定义函数strlen()-求字符串长度
#include<stdio.h>
int my_strlen(char *i)
{
	char *start=i;
	char *end=i;
	while (*end!=0)
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[10] = {"hahaha"};
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}