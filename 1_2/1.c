#include<stdio.h>
int main()
{

	//��������
	int a[] = {0,1,2,3};
	printf("%d\n",sizeof(a));//16--���������������Ĵ�С4*4
	printf("%d\n", sizeof(a+0));//4/8--32Ϊ4��64Ϊ8���������������ʾ��Ԫ�صĴ�Сa+0������Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));//4/8--�ڶ������
	printf("%d\n", sizeof(a+1));//4/8�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(a[1])); //4/8�ڶ���Ԫ�ش�С
	printf("%d\n", sizeof(&a));//4/8--��ַa�����ַ��СΪ4/8
	printf("%d\n", sizeof(*&a));//16==a���������С
	printf("%d\n", sizeof(&a+1));//4/8��������ĵڶ�������ĵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8��һ��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0]+1));//4/8�ڶ���Ԫ�صĵ�ַ
	
	//�ַ�����
	//char ch[] = { 'a', 'b', 'c' };
	//printf("%d\n",sizeof(ch));//3--�����ַ�����Ĵ�С
	//printf("%d\n", sizeof(ch+0));//4/8--�ڶ������--��Ԫ�ص�ַ+0������Ԫ�ص�ַ����Ԫ�ص�ַ��СΪ4/8
	//printf("%d\n", sizeof(*ch));//1--chΪ��Ԫ�ص�ַ����*�����ã����Զ��ߵ����ˣ���Ϊ��Ԫ�ش�С
	//printf("%d\n", sizeof(ch[1]));//1
	//printf("%d\n", sizeof(&ch));//4/8
	//printf("%d\n", sizeof(&ch+1));//4/8
	//printf("%d\n", sizeof(&ch[0]+1));//4/8�ڶ��������ַ��С

	//strlen()-���ַ�������-���裺��\0
	char ch[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(ch));//���ֵ
	printf("%d\n", strlen(ch+0));//���ֵ
	//printf("%d\n", strlen(*ch));//error
	//printf("%d\n", strlen(ch[1]));//error
	printf("%d\n", strlen(&ch));//���ֵ
	printf("%d\n", strlen(&ch + 1));//���ֵ
	printf("%d\n",strlen(&ch[0]+1));//���ֵ
	return 0;
}