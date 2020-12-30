#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int x,y;
//	printf("请输入x的值：");
//	scanf("%d",&x);
//	if (x > 1)
//	{
//		y = sqrt(pow(x,2)+1);
//	}
//	else if (x>=-1&&x<=1)
//	{
//		y = 2 * x;
//	}
//	else
//	{
//		y=pow(x, 3);
//	}
//	printf("%d\n", y);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 0 };
//	int i=0,temp=0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int a = 0;
//	while (a<3)
//	{
//		if (arr[0] < arr[1])
//		{
//			temp = arr[0];
//			arr[0] = arr[1];
//			arr[1] = temp;
//		}
//		else if (arr[0] < arr[2])
//		{
//			temp = arr[0];
//			arr[0] = arr[2];
//			arr[2] = temp;
//		}
//		else if (arr[1]<arr[2])
//		{
//			temp = arr[1];
//			arr[1] = arr[2];
//			arr[2] = temp;
//		}
//		a++;
//	}
//	
//for(i = 0; i < 3; i++)
//{
//		printf("arr[%d]=%d\t",i,arr[i]);
//}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int g, s, b, n;
//	for (n = 100; n < 1000; n++)
//	{
//		g = n % 10;
//		s = n / 10 % 10;
//		b = n / 100;
//		if (n == pow(b, 3) + pow(s, 3) + pow(g, 3))
//		{
//			printf("%d\t",n);
//		}
//
//
//	}
//	return 0;
//}

//6．设有十进制数字a、b、c、d，且a、b、c、d互不相等，求满足abc*d=cba式子的三位数abc。
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			for (c = 1; c < 10; c++)
//			{
//				for (d = 1; d < 10; d++)
//				{
//					if (a==b||a==c||a==d||b==c||b==d||c==d)
//					{
//						continue;
//					}
//					if ((a * 100 + b * 10 + c)*d == c * 100 + b * 10 + a)
//					{
//						
//						printf("%d%d%d=%d%d%d*%d",a,b,c,c,b,d);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a, b, c, d,e;
	for (a = 1; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (e = 0; e < 10; e++)
				{
					for (d = 1; d < 10; d++)
					{
						if (a == b || a == c || a == d ||a==e|| b == c || b == d ||b==e|| c == d||c==e)
						{
							continue;
						}
						if ((a * 1000 + b * 100 + c*10+e)*d == e*1000+c * 100 + b * 10 + a*1)
						{

							printf("%d%d%d%d*%d=%d%d%d%d\n", a, b, c,e,d, e,c, b, a);
						}
					}
				}
				
			}
		}
	}
	return 0;
}