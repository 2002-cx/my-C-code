//#define _CRT_SECURE_NO_WARNINGS 1
////假设 TEST_ONE 和TEST_TWO 互被定义在在两个头文件里面，且TEST_ONE TEST_TWO互不兼容
////比如这定义这两个的头文件都有定义print()函数但是分别定义 int print(char *) char print(int)
//#define TEST_ONE "库未被定义"
//#define TEST_TWO "库未被定义"
//#if defined TEST_TWO
//#	undef TEST_TWO
//#	undef TEST_ONE 
//#	define TEST_ONE "库已被定义"
//#endif
//
//#include<stdio.h>
//int main()
//{
//	printf("%s\n", TEST_ONE);
//	return 0;
//}