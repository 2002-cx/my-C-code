#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	char *p=(char*)&a;
//	if (*p != 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�Զ���check_sys()�������ж��Ƿ�Ϊ��С��
//#include<stdio.h>
//int check_sys()
//{
//	int a;
//	scanf("%d",&a);
//	char *p = (char*)&a;
//	if (*p != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�Ż�
//#include<stdio.h>
//int check_sys()
//{
//	int a;
//	scanf("%d", &a);
//	char *p = (char*)&a;
//	return *p;
//	//���ط�0��С��
//	//����0�����
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//���Ż�
//#include<stdio.h>
//int check_sys()
//{
//	int a;
//	scanf("%d", &a);
//	return *(char*)&a;//ֱ�ӽ�����
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 0)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//10000000000000000000000010000000
//00000000000000000000000010000000
//11111111111111111111111110000000						  10000000
//#include<stdio.h>
//int main()
//{
//	int a = -128;
//	printf("%u\n",a);//%u--��ӡ10���Ƶ��޷�������
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = -20;
//	printf("%d\n",a+b);
//	return 0;
//}
//10=00000000 00000000 00000000 00001010:Դ����������


//-20=10000000 00000000 00000000 00010100��Դ��
//-20=11111111 11111111 11111111 11101011: ��
//-20=11111111 11111111 11111111 11101100����

// 10=00000000 00000000 00000000 00001010����
//-20=11111111 11111111 11111111 11101100����
//   =11111111 11111111 11111111 11110110����

//   =11111111 11111111 11111111 11110110����
//   =11111111 11111111 11111111 11110101����
//   =10000000 00000000 00000000 00001010��  -10


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);//Ϊʲô��ӡ�Ľ��Ϊ��ѭ������ΪiΪ�޷�������������Ϊ����������ѭ��
//		Sleep(100);//100����=0.1��
//	}
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d\n",strlen(arr));//255,strlen()��\0=0
//	return 0;
//}

#include<stdio.h>
unsigned char i=0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");//129��hello world
	}
	return 0;
}

