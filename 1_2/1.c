#include<stdio.h>
int main()
{

	//整形数组
	int a[] = {0,1,2,3};
	printf("%d\n",sizeof(a));//16--计算的是整个数组的大小4*4
	printf("%d\n", sizeof(a+0));//4/8--32为4，64为8，数组名，这里表示首元素的大小a+0还是首元素地址
	printf("%d\n", sizeof(*a));//4/8--第二种情况
	printf("%d\n", sizeof(a+1));//4/8第二个元素的大小
	printf("%d\n", sizeof(a[1])); //4/8第二个元素大小
	printf("%d\n", sizeof(&a));//4/8--地址a数组地址大小为4/8
	printf("%d\n", sizeof(*&a));//16==a整个数组大小
	printf("%d\n", sizeof(&a+1));//4/8整个数组的第二个数组的地址
	printf("%d\n", sizeof(&a[0]));//4/8第一个元素地址
	printf("%d\n", sizeof(&a[0]+1));//4/8第二个元素的地址
	
	//字符数组
	//char ch[] = { 'a', 'b', 'c' };
	//printf("%d\n",sizeof(ch));//3--整个字符数组的大小
	//printf("%d\n", sizeof(ch+0));//4/8--第二种情况--首元素地址+0还是首元素地址，首元素地址大小为4/8
	//printf("%d\n", sizeof(*ch));//1--ch为首元素地址，在*解引用，所以二者抵消了，就为首元素大小
	//printf("%d\n", sizeof(ch[1]));//1
	//printf("%d\n", sizeof(&ch));//4/8
	//printf("%d\n", sizeof(&ch+1));//4/8
	//printf("%d\n", sizeof(&ch[0]+1));//4/8第二个数组地址大小

	//strlen()-求字符串长度-精髓：找\0
	char ch[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(ch));//随机值
	printf("%d\n", strlen(ch+0));//随机值
	//printf("%d\n", strlen(*ch));//error
	//printf("%d\n", strlen(ch[1]));//error
	printf("%d\n", strlen(&ch));//随机值
	printf("%d\n", strlen(&ch + 1));//随机值
	printf("%d\n",strlen(&ch[0]+1));//随机值
	return 0;
}