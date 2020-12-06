//#define _CRT_SECURE_NO_WARNINGS 1
////指针和数组
//#include<stdio.h>
//int main()
//{
//	int i[10] = {0};
//	printf("%p\n",i);//i-地址--首元素的地址
//	//例外：
//	//1.&i--&数组名---表示的是整个元素的地址
//	//2.sizeof(i)--sizeof(数组名)--表示的是整个元素的大小-（字节）
//	printf("%p\n",&i[0]);
//	int *p = i;
//	int n;
//	for (n = 0; n < 10; n++)
//	{
//		printf("%p=====%p\n",	p+n,&i[n]);
//
//	}
//	return 0;
//}