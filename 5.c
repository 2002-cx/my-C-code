#define _CRT_SECURE_NO_WARNINGS 1
/*1������1��1��2��3��5��8���е�ǰ20�
�����ʽΪ��
f(1)=1
f(2)=1
f(3)=2
*/
//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 1,1 };
//	int i;
//	printf("f(1)=1\n");
//	printf("f(2)=1\n");
//	for (i = 3; i <= 20; i++)
//	{	
//		if (i >= 3)
//		{
//			arr[i-1] = arr[i - 3] + arr[i - 2];
//			printf("f(%d)=%d\n", i, arr[i-1]);
//		}
//	}
//	return 0;
//}

/*2����һ�������е�ֵ�����š����磺ԭ����˳��Ϊ1,2,3,4,5�����´�ŵ�˳��Ϊ5,4,3,2,1��
Ҫ����������9��Ԫ�ء�
*/
//#include<stdio.h>
//int main()
//{
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int i,temp=0;
//		for (i = 1; i <= 4; i++)
//		{
//			if (arr[i - 1] < arr[9 - i])
//			{
//				temp = arr[9 - i];
//				arr[9 - i] = arr[i - 1];
//				arr[i - 1] = temp;
//				
//			}
//		}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

/*3����һ�����������в���һ������ʹ������Ȼ������������!!!!!!!!!!!!!!!!!*/
#include<stdio.h>
int main()
{
	int arr[6] = {1,3,4,8,15};
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < 6; i++)
	{
		if (n<arr[i])
		{
			break;
		}
	}
	for (j = 5; j > i; j--)
	{
		arr[j] = arr[j-1];
	}
	arr[j] = n;
	for (i = 0; i <6; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

/*4��ͳ��ĳ��10��ͬѧĳ�ſγ̵���ͷֺͲ������������*/
//#include<stdio.h>
//int main()
//{
//	int score[10] ;
//	int i,b=0,temp=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&score[i]);
//		if (score[i] < 60)
//		{
//			b++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (score[i] < score[i + 1])
//		{
//			temp = score[i];
//			score[i] = score[i + 1];
//			score[i + 1] = temp;
//		}
//		//printf("%d\n",score[i]);
//	}
//		printf("���������%d��\n",b);
//		printf("��ͷ�Ϊ%d��\n",score[9]);
//	return 0;
//}

/*5������һ��һά���飬�Ӽ���������8�����������䰴�Ӵ�С��˳�����У��������к�������������ð�����򷨣�*/
//#include<stdio.h>
//int main()
//{
//	int arr[8];
//	int i, j, temp = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 0; j <=7 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//	return 0;
//}

/*6����һ��Э���ڻ���ѡ�٣�
��ȫ���Ա�޼���ͶƱֱѡ��ϯ������5����ѡ�ˣ�5���˵Ĵ��ŷֱ���1-5��ʾ��
ÿ����Ա��дһ��ѡƱ����ͬ��ĳ����ѡ��������������򹳼��ɡ���д����
��������ѡƱͳ��ÿ����ѡ������Ʊ����
����ÿ��ѡƱ����Ͷ��ѡ�˵Ĵ����ɼ������룬
������������ѡƱ����0��Ϊ��ֹ��������ı�־��*/
//#include<stdio.h>
//void menu()
//{
//	printf("********************\n");
//	printf("*****1:check  0:exit\n");
//	printf("********************\n");
//}
//void check()
//{
//	int input;
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	
//	do{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		} 
//	while (input);
//	{
//			switch (input)
//			{
//			case 1:
//				a++;
//				break;
//			case 2:
//				b++;
//				break;
//			case 3:
//				c++;
//				break;
//			case 4:
//				d++;
//				break;
//			case 5:
//				e++;
//				break;
//		}
//	}
//		printf("%d%d%d%d%d\n",a,b,c,d,e);
//}
//int main()
//{
//	check();
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int check[20] = {0};
//	int i;
//	int a = 0, b = 0, c =0 , d = 0, e = 0,qt=0;
//	for (i = 0; i < 20;i++)
//	{
//		scanf("%d",&check[i]);
//		if (check[i] == 0)
//		{
//			break;
//		}
//		else if (1==check[i])
//		{
//			a++;
//		}
//		else if (2 == check[i])
//		{
//			b++;
//		}
//		else if (3 == check[i])
//		{
//			c++;
//		}
//		else if (4 == check[i])
//		{
//			d++;
//		}
//		else if (5==check[i])
//		{
//			e++;
//		}
//		else
//		{
//			qt++;
//		}
//		}
//	printf("1�ŵ�%dƱ\t2�ŵ�%dƱ\t3�ŵ�%dƱ\t4�ŵ�%dƱ\t5�ŵ�%dƱ\t��ƱΪ%dƱ\n",a,b,c,d,e,qt);
//	return 0;
//}