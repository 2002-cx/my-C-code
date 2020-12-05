//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	short c = 1;
//	char b = 'w';
//	int arr[10] = {0};
//	printf("%d\n",sizeof(short));//短整形，所占2个字节的大小
//
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//	//~对二进制数按位取反
//	int d = 0;
//	//00000000000000000000000000000000:源码=反码=补码
//	//11111111111111111111111111111111：按位取反之后的结果
//	//11111111111111111111111111111110：要得到源码，先-1再取反（-1）
//	//10000000000000000000000000000001:符号位不变，其它位按位取反，所以结果为-1
//
//	int f = 10;
//	//printf("%d\n",++f);
//	printf("%d\n",f++);
//
//#define PI 3.14
//	printf("%0.2f\n",PI);
//
//	
//	int arr2[10] = {0};
//	char arr1[10] = {0};
//	printf("%d\n",sizeof(char[10]));//10
//	printf("%d\n",sizeof(arr2[10]));//40
//	
//	//求两个数的较大值,三木操作符
//	int x = 10,  y = 20,max=0;
//	max = (x > y ? x : y);
//	printf("max=%d\n",max);
//
//	//逗号表达式，从左到右依次计算，但整个表达式的结果是最后一个表达式的结果
//	int p = 1, l = 2, v = 3;
//	d = (p>l,l,l,l,v,l+v ) ;//5
//	printf("%d\n",d);
//
//	//函数调用操作符()
//#include<stdio.h>
//	int get_max(int x,int y);
//	{
//		if (x > y)
//		{
//			return x;
//		}
//		else
//			return y;
//	}
//	int main()
//	{
//	int n1=10, n2=20;
//	int max_1 = get_max(n1, n2);
//	printf("max=%d\n",max_1);
//
//	return 0;
//}