//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int a, b;
//	for (a = 0; a < sz - 1; a++)
//	{
//		//����ð�������������Ϊsz-i��
//		for (b = 0; b < sz - 1 - a;b++)
//		{
//			//�м���
//			if (arr[b]>arr[b + 1])
//			{
//				int temp = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0},sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int *a[2] ;
//	int *(*pa)[2]=&a;
//	int *(*ppa[2]) =&pa;
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pa)(int ,int)=Add;//����ָ��
//	int (*ppa[10])(int, int) = &pa;//����ָ������
//	int (*(*pppa)[10])(int, int) = &ppa;//ָ����ָ�������ָ��
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2 };
//	printf("%d\n",sizeof(arr[0]));//һ��Ԫ�صĴ�С����λ|�ֽ�
//	return 0;
//}