//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void test3()
//{
//	printf("haha\n");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//
//}

//strcpy（）-字符串拷贝
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "********************";
//	char arr2[4] = "bit";
//	strcpy(arr1,arr2);//strcpy(目标，源头)
//	printf("%s\n",arr1);
//	return 0;
//}

//自定义函数实现strcpy()
#include<stdio.h>
//void my_strcpy(char *str1,char *str2)
//{
//	while (*str2!='\0')
//	{
//		*str1 = *str2;
//		str2++;
//		str1++;
//	}
//	*str1 = *str2;
//}

//优化
//void my_strcpy(char *str1, char *str2)
//{
//	if ((str1 != NULL) && (str2 != NULL))
//	{
//		while (*str1++ = *str2++)
//		{
//			;
//		}
//	}
//	else
//	{
//		printf("程序有误！\n");
//	}
//}

//再优化
//#include<assert.h>
//void my_strcpy(char *str1, char *str2)
//{
//	assert(str1 != NULL);//断言，表达式为真则什么都不发生。如果为假，则程序会报错
//	assert(str2!=NULL);
//	while (*str2++=*str1++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "***************";
//	char arr2[4] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
//
//

//自定义函数，求字符串长度my_strlen()
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//断言，表达式结果为假，就报错
//	{
//		while (*str != '\0')
//		{
//			str++;
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[20] = "heheheh";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//
//}



















