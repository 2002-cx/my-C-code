
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	void *pa = &a;
//	*pa = 20;//void *类型的指针，不能对它进行解引用操作
//	pa++;//void *类型的指针，也不能进行加减整数的运算，因为它是空类型的，不知道要访问几个字节空间的大小
//	return 0;
//}

//qsort()函数-进行各种类型的排序#include<stdlib.h>
//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void *e1,const void *e2)
//{
//	return *(int *)e1 - *(int *)e2;
//}
//void test1()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 9, 8, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//
//int cmp_float(void *e1,void *e2)
//{
//	//return ((*(float *)e1 - *(float *)e2));
//	if (*(int *)e1 == *(int *)e2)
//	{
//		return 0;
//	}
//	else if (*(int *)e1 < *(int *)e2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//void test2()
//{
//	float farr[] = { 0.0, 1.1, 2.2, 3.0, 4.1, 5.3, 6.6, 9.9, 8.4, 7.5 };
//	int sz = sizeof(farr) / sizeof(farr[0]);
//	qsort(farr, sz, sizeof(farr[0]), cmp_float);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", farr[i]);
//	}
//}
//int main()
//{
//	test1();//排序整形数组
//	test2();//排序浮点型数组
//	return 0;
//}

#include<stdio.h>
int str_sort(const void *e1, const void *e2)
{
	struct Stu  {
		char name;
		int age;
	};
	return ((struct Stu *)e1)->age - ((struct Stu*)e2)->age;
}
int main()
{
	struct Stu  {
		char name;
		int age;
	};
	struct Stu s[3] = { { "zhangsna", 18 }, { "lisi", 20 }, { "wangwu", 32 } };//创建一个结构体数组
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), str_sort);
	printf("%s",s[0].name);
	return 0;

}