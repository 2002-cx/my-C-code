//#define _CRT_SECURE_NO_WARNINGS 1
////ָ�������
//#include<stdio.h>
//int main()
//{
//	int i[10] = {0};
//	printf("%p\n",i);//i-��ַ--��Ԫ�صĵ�ַ
//	//���⣺
//	//1.&i--&������---��ʾ��������Ԫ�صĵ�ַ
//	//2.sizeof(i)--sizeof(������)--��ʾ��������Ԫ�صĴ�С-���ֽڣ�
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