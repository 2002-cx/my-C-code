#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *p=&a;//pΪָ�����������Ϊint * 
//	printf("%p\n",p);
//	printf("%p\n",&a);
//	//printf("%p\n",*p);
//	return 0;
//}

//#include<stdio.h>
////ָ�����;�����ָ��ӵ��ֽڵĴ�С
////ָ�����;�����ָ����һ���߶�����
////int *p   p+1->4���ֽ�
////char *p   p+1->1���ֽ�
////double *p   p+1->8���ֽ�
////short *p   p+1->2���ֽ�
//int main()
//{
//	int a = 0x11223344;
//	int *pa=&a;
//	char *pc = &a;
//	short *pd = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);//����ָ��+1��һ�μ�4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//�ַ�ָ��+1��һ�μ�1���ֽ�
//
//	printf("%p\n",pd);
//	printf("%p\n",pd+1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	printf("%d\n",arr[5]);
//	return 0;
//}