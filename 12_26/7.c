////����ָ��--��ָ��
//#include<stdio.h>
//int main()
//{
//	int *a = NULL;//����ָ��
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main(void)
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("\t\t\t��ע�⣺��С�ӵĵ��Խ�����һ����֮�ڹػ���\n\t\t\t������롰�������ͷ���һ��\n");
	printf("��ɣ�");
again:
	printf("�ٸ���һ�λ��᣺"); 
	scanf("%s",&input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}