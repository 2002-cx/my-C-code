//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	short c = 1;
//	char b = 'w';
//	int arr[10] = {0};
//	printf("%d\n",sizeof(short));//�����Σ���ռ2���ֽڵĴ�С
//
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//	//~�Զ���������λȡ��
//	int d = 0;
//	//00000000000000000000000000000000:Դ��=����=����
//	//11111111111111111111111111111111����λȡ��֮��Ľ��
//	//11111111111111111111111111111110��Ҫ�õ�Դ�룬��-1��ȡ����-1��
//	//10000000000000000000000000000001:����λ���䣬����λ��λȡ�������Խ��Ϊ-1
//
//	int f = 10;
//	//printf("%d\n",++f);
//	printf("%d\n",f++);
//
//#define PI 3.14
//	printf("%0.2f\n",PI);
//
//	
//	int arr2[10] = {0};
//	char arr1[10] = {0};
//	printf("%d\n",sizeof(char[10]));//10
//	printf("%d\n",sizeof(arr2[10]));//40
//	
//	//���������Ľϴ�ֵ,��ľ������
//	int x = 10,  y = 20,max=0;
//	max = (x > y ? x : y);
//	printf("max=%d\n",max);
//
//	//���ű��ʽ�����������μ��㣬���������ʽ�Ľ�������һ�����ʽ�Ľ��
//	int p = 1, l = 2, v = 3;
//	d = (p>l,l,l,l,v,l+v ) ;//5
//	printf("%d\n",d);
//
//	//�������ò�����()
//#include<stdio.h>
//	int get_max(int x,int y);
//	{
//		if (x > y)
//		{
//			return x;
//		}
//		else
//			return y;
//	}
//	int main()
//	{
//	int n1=10, n2=20;
//	int max_1 = get_max(n1, n2);
//	printf("max=%d\n",max_1);
//
//	return 0;
//}