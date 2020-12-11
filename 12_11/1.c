#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	char *p=(char*)&a;
//	if (*p != 0)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//自定义check_sys()函数，判断是否为大，小端
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//优化
//#include<stdio.h>
//int check_sys()
//{
//	int a;
//	scanf("%d", &a);
//	char *p = (char*)&a;
//	return *p;
//	//返回非0，小端
//	//返回0，大端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 0)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//再优化
//#include<stdio.h>
//int check_sys()
//{
//	int a;
//	scanf("%d", &a);
//	return *(char*)&a;//直接解引用
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret != 0)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//	printf("%u\n",a);//%u--打印10进制的无符号数字
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
//10=00000000 00000000 00000000 00001010:源，反，补码


//-20=10000000 00000000 00000000 00010100：源码
//-20=11111111 11111111 11111111 11101011: 反
//-20=11111111 11111111 11111111 11101100：补

// 10=00000000 00000000 00000000 00001010：补
//-20=11111111 11111111 11111111 11101100：补
//   =11111111 11111111 11111111 11110110：补

//   =11111111 11111111 11111111 11110110：补
//   =11111111 11111111 11111111 11110101：反
//   =10000000 00000000 00000000 00001010：  -10


//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);//为什么打印的结果为死循环？因为i为无符号数，不可能为负，所以死循环
//		Sleep(100);//100毫秒=0.1秒
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
//	printf("%d\n",strlen(arr));//255,strlen()找\0=0
//	return 0;
//}

#include<stdio.h>
unsigned char i=0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");//129个hello world
	}
	return 0;
}

