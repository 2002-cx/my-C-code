//#include<stdio.h>
//int main()
//{
//	//32λƽ̨��Ĭ��Ϊ4���ֽ�
//	printf("%d\n",sizeof(int *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(float *));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//64λƽ̨��Ĭ��Ϊ8���ֽ�
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(double *));
//	printf("%d\n", sizeof(float *));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a=0x11223344;
//	int *pa = &a;
//	//*pa = 0;
//	char *pb = &a;
//	*pb = 0;
//
//	printf("%p\n",pb);
//	//printf("%p\n", pb);
//	return 0;
//}
//ָ��+-���������壬��ͬ���͵�ָ�룬ֱ��Ӱ���żӼ���������������ֽ�
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int *pa = &a;
//	char *pb = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa+1);//��Ϊpa��int ���ͣ����Լ�1�������4���ֽ�
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);//��Ϊpb��char ���ͣ����Լ�1�������1���ֽ� 
//	return 0;
//}

////��һ�����������е�Ԫ��ȫ���ĳ�1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int *pa=arr;//arr--��Ԫ�صĵ�ַ
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

////Ұָ��--����ش�Ĵ���
//#include<stdio.h>
//int *test()
//{
//	int a = 10;
//	return &a;//int aΪ�ֲ�����--һ���������ͻᱻ����
//}
//int main()
//{
//	int *p=test();//���صĵ�ַ����ָ��a
//	printf("%d\n",*p);//�����û�ȥ��Ҳ�Ҳ���ԭ����a�� 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int *p ;	//���һ��ָ��û�г�ʼ��--��Ĭ��ָ��һ�����ֵ
//	char *pa = NULL;//���ָ�벻֪����ʼ��Ϊʲô�Ļ����͸�ֵΪ��ָ��
//	return 0;
//}
//
//#define NULL 0
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	pa = NULL;//���������pa���ָ���ˣ���Ϊ��ָ��
//	return 0;
//}

//ָ������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int *p = arr;
//	int i,sz=sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//1:printf("%d\t",*(p+i));
//		//2:printf("%d\t",*p);
//		//p++;
//
//		//3:printf("%d\t",*p);
//		//p = p + 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = &arr[9];
//	int i, sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < ; i++)
//	{
//		printf("%d\t",*p);
//		p -= 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//#define N_Values 5
////��arr�������θ�ֵΪ1��
//int main()
//{
//	int arr[N_Values];
//	int *vp=&arr[0];
//	for (vp = &arr[0]; vp < &arr[N_Values];)//ָ���ϵ����
//	{
//		*vp++=1;
//	}
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>//ָ��-ָ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]),s = &arr[sz-1] - &arr[0];
//	printf("%d\n",s);//ָ��ĩβ-ָ���=�м�Ԫ�ظ���!!��������ͱ�����ͬ
//	return 0;
//}












