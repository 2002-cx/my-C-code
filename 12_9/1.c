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

//strcpy����-�ַ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "********************";
//	char arr2[4] = "bit";
//	strcpy(arr1,arr2);//strcpy(Ŀ�꣬Դͷ)
//	printf("%s\n",arr1);
//	return 0;
//}

//�Զ��庯��ʵ��strcpy()
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

//�Ż�
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
//		printf("��������\n");
//	}
//}

//���Ż�
//#include<assert.h>
//void my_strcpy(char *str1, char *str2)
//{
//	assert(str1 != NULL);//���ԣ����ʽΪ����ʲô�������������Ϊ�٣������ᱨ��
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

//�Զ��庯�������ַ�������my_strlen()
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//���ԣ����ʽ���Ϊ�٣��ͱ���
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



















