#define _CRT_SECURE_NO_WARNINGS 1
//隐式类型转换
//整形提升
#include<stdio.h>
int main()
{
	char a=1, b=2, c;
	c = a + b;
	printf("%d\n",c);
	return 0;
}