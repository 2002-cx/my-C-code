//#include<stdio.h>
//int main()
//{
//	int n,g,s,b,q;
//	scanf_s("%d",&n);
//	g = n % 10;
//	s = n / 10 % 10;
//	b = n / 100 % 10;
//	q = n / 1000;
//	printf("%d\t%d\t%d\t%d\t",q,b,s,g);
//	return 0;
//}

//�ݹ�--ʵ������һ������������Ļ�����δ�ӡ��
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d\t",n%10);
//}
//int main()
//{
//	int n;
//	scanf_s("%d",&n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[] = "bit";
//	int len = strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}
//



//ģ��ʵ����һ��strlen����
//#include<stdio.h>
//int my_strlen(char * str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//		
//	}
//	return count;
//}
//int main()
//{
//	char ch[] = "hello world";
//	int len = my_strlen(ch);
//	printf("%d",len);
//	return 0;
//}

//���õݹ�ʵ��
//#include<stdio.h>
//int my_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char ch[] = "hello world";
//	int len = my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}
//
//

//����n�Ľ׳�--�Զ��庯��
//#include<stdio.h>
//ѭ��
//int Fac(int n)
//{
//	int i,ret=1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		
//	}
//	return ret;
//}
//
////�ݹ�
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac1(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d",&n);
//	int ret = Fac1(n);
//	printf("%d\n",ret);
//	return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//	if (1 == n)//���Ե�һ��쳲���������������Ĵ���
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("����������Ҫ�ĵڼ���쳲���������");
//	scanf_s("%d",&n);
//	int ret=Fib(n);
//	printf("%d\n",ret);
//	printf("%d\n",count);
//	return 0;
//}


//����ѭ����ʽ����쳲�������
//102334155
//#include<stdio.h>
//int Fib(int n)
//{
//	int a=1,b=1, c=0;
//	
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n>2)
//	{
//		c = a + b;	
//		a = b;
//		b = c;
//		n--;
//		//1 1 2 3 5
//		//a b c
//		//  a b c 
//		
//	}
//		return c;
//	
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}
//
#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char input[] = {0};
//	system("shutdown -s -t 60");
//	printf("ע�⣬���̶����Խ�����һ����֮�ڹػ�\n");
//	printf("�������롰���������Ǿͷ���һ��\n");
//	again:
//	printf("���");
//	scanf("%s",&input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("������һ�λ��ᣡ��������ϧ������");
//		goto again;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdefg";//�ַ��������Ĭ��Ϊ\0����ȫΪ0
//	
//	printf("%d\n",sizeof(arr));//4---sizeof()������˸�\0
//	//sizeof()---����ռ�ռ��С,����\0
//	printf("%d\n",strlen(arr));//3
//	//strlen()--���ַ�������(ֻ�ܶ����ַ���)��\0֮ǰ��������\0
//	int i;
//	for (i = 0; i <(int)strlen(arr); i++)
//	{
//		printf("%c\t",arr[i]);
//	}
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int i,sz=sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i <= sz;i++)
//	{
//		printf(" arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}


//��ά����
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int arr[3][4] = {0,1,2,3,4,5,6,7,8,9};
//	for (i = 0; i < 3; i++)//��
//	{
//		for (j = 0; j < 4; j++)//��
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int arr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (i = 0; i < 3; i++)//��
//	{
//		for (j = 0; j < 4; j++)//��
//		{
//			printf("arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		
//	}
//
//	return 0;
//}











#include<stdio.h>
int main()
{
	int i = 1;
	float month = 0.0;
	float yearmoney = 0.0;
	printf("������ÿ���µ�ˮ��ѣ�");
	while (i<=12)
	{
		scanf("%f", &month);
		yearmoney += month;
		i++;
	}
	printf("yearmoney=%0.2f",yearmoney);

	return 0;
}




