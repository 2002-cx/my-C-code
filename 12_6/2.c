//#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
//////Ұָ��
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
////ָ��Ӽ�����
////ָ��+-����
////ָ��-ִ��
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
////		p += 1;//ָ��+����
////	}
////	return 0;
////}
//
////ָ��-ָ��=�м�Ԫ�صĸ���
////#include<math.h>
////#include<stdio.h>
////int main()
////{
////	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
////	printf("%d\n",abs(&arr[0]-&arr[9]));//ָ��-ָ��
////	return 0;
////}
//
////����ָ�룬ʵ��strlen����
//#include<stdio.h>
//int my_strlen(char *str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ��-ָ��
//}
//int main()
//{
//	char ch[] = "hahah";
//	int len =my_strlen(ch);//��Ԫ�ص�ַ
//	printf("%d\n",len);
//	return 0;
//}