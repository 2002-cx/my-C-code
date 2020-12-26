////利用指针，自定义函数模拟实现strlen函数
//#include<stdio.h>
//int my_strlen(char *str)//元素为char类型，传上来的为首元素的地址，所以要用char类型的指针接收
//{
//	char *end=str, *start=str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//'\0'-首元素=长度
//}
//int main()
//{
//	char ch[] = "hello world!";
//	int len=my_strlen(ch);
//	printf("%d\n",len);//首元素地址
//	return 0;
//}