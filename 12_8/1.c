#define _CRT_SECURE_NO_WARNINGS 1
////�ṹ������struct tag(��ǩ���������滻)
//#include<stdio.h>
////����һ����
//typedef struct Book    //Book-�ṹ���ǩ   struct Book-�ṹ������
//{
//	char name[20];
//	int price;
//	char author[20];
//}book;// , s1, s2, s3;//�����ȫ�ֱ���������������
//int main()
//{
//	book b1 = {"ƽ��������",169,"��"};
//	printf("%s\n%d\n%s\n",b1.name,b1.price,b1.author);
//	return 0;
//}

//�ṹ�����Ƕ�׸������ͣ�Ҳ������Ƕ�׽ṹ��
//struct T
//{
//	int i;
//	char arr[12];
//	double d;
//
//
//};
//struct C
//{
//	int p;
//	struct T t;
//	float f;
//};
//#include<stdio.h>
//int main()
//{
//	struct C c1 = { 10, {20,"��",12.1},3.14 };//�ṹ����Ƕ�׽ṹ��
//	printf("%s\n",c1.t.arr);
//	return 0;
//}
//#include<stdio.h>
//struct b1
//{
//	char arr[15];
//	int i;
//	float f;
//};
//void print(struct b1 b)
//{
//	printf("name:%s\n",b.arr);
//	printf("price:%d\n",b.i);
//	printf("f:%f\n",b.f);
//}
//void print1(struct b1 *b)
//{
//	printf("name:%s\n",b->arr);
//	printf("price:%d\n", b->i);
//	printf("f:%f\n", b->f);
//}
//int main()
//{
//	struct b1 b = {"��ƽ�������硷",48,3.14};
//	print(b);
//	print1(&b);
//	return 0;
//}
//

//�������飬��������
#include<stdio.h>
int main()
{
	int arr[6] = { 9, 8, 1, 5, 3, 6 };
	int i, j,temp=0;
	for (i = 0; i <= 5;i++)
	{
		for (j = 0; j <=7 - i;j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (i = 0; i < 6; i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}










