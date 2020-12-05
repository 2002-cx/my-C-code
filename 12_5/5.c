//#define _CRT_SECURE_NO_WARNINGS 1
////创建一个结构体类型
//#include<stdio.h>
//struct Student
//{
//	//成员变量
//	char name[10];
//	int age;
//	char id[10];
//
//};
//int main()
//{
//	struct Student s1 = {"张三",18,"19680321"};
//	printf("%s\n",s1.name);//结构体变量.成员名
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);
//	struct Student *p=&s1;
//	printf("%p\n",p);//打印地址
//
//	printf("%s\n",(*p).name);//同样可以解引用打印出name
//	printf("%d\n",(*p).age);
//
//	//->结构体指针操作符==结构体指针->成员名
//	printf("%s\n",p->name);
//	printf("%d\n",p->age);
//	return 0;
//}