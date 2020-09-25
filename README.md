//求两数较大值-自定义函数
#include<stdio.h>
Max(int x, int y)
{
if(x>y)
return x;
else
return y;
}
int main()
{
int a = 10;
int b = 20;
int max = 0;
max = Max(a,b);
printf("max = %d", max);
return 0;
}

//利用宏定义，求两数较大值
#define Max(x , y) (x>y?x:y)
#include<stdio.h>
int main()
{
int a = 10;
int b = 20;
int max = 0;
max = Max(a , b );
printf(" max = %d\n" ,max);

return 0;
}

//利用sizeof计算数组元素的多少 = 总大小 / 单个元素的大小 ，单位（字节）
#include<stdio.h>
int maim()
{
int arr[] = {1,2,3,4,5,6,7,8,9,10};
printf("%d\n",sizeof(arr)/ sizeof(arr[0]));
return 0;
}
 
 
 
//利用while循环，计算数组元素多少。
#include<stdio.h>
int main()
{
int i = 0;
int arr[] = {1,2,3,4,5,6,7,8,9,10};
while(i<10)
{
printf("%d\n",arr[i]);
i++;
}
return 0;
}

//++x前置加加，先加加，再使用
#include<stdio.h>
int main()
{
int a = 10;
int b = ++a;
printf("a = %d\n , b = %d\n" ,a , b ); //a = 11 , b = 11
return 0;
}

//x++:后置加加，先使用，再加加
#include<stdio.h>
int main()
{
int a = 10;
int b = a++;
printf("a = %d\n , b = %d\n" ,a ,b ); //a = 11, b = 10 
return 0;
}


//--x前置减减，先减减，后使用
#include<stdio.h>
int main()
{
int a = 10;
int b = --a;
printf("a = %d\n , b = %d\n" , a , b); //a = 9 b = 9
return 0;
}


//x--后置减减：先使用，再减减
#include<stdio.h>
int main()
{
int a = 10;
int b = a--;
printf("a = %d\n , b = %d\n" ,a ,b );  //a = 9 , b = 10
return 0;
}




























