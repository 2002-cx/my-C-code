#define _CRT_SECURE_NO_WARNINGS 1
////结构的声明struct tag(标签，可随意替换)
//#include<stdio.h>
////描述一本书
//typedef struct Book    //Book-结构体标签   struct Book-结构体类型
//{
//	char name[20];
//	int price;
//	char author[20];
//}book;// , s1, s2, s3;//定义的全局变量，但尽量少用
//int main()
//{
//	book b1 = {"平凡的世界",169,"陈"};
//	printf("%s\n%d\n%s\n",b1.name,b1.price,b1.author);
//	return 0;
//}

//结构体可以嵌套各种类型，也可以再嵌套结构体
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
//	struct C c1 = { 10, {20,"鑫",12.1},3.14 };//结构体中嵌套结构体
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
//	struct b1 b = {"《平凡的世界》",48,3.14};
//	print(b);
//	print1(&b);
//	return 0;
//}
//

//有序数组，升序排序
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










