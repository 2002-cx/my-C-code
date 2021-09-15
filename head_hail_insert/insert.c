#include<stdio.h>
#include<malloc.h>
//����ṹ��
typedef struct node{
	int data;//����
	struct node * next;//�����һ����ַ��ָ��
}node;
node *head = NULL;//����һ��ȫ�ֱ�����ͷΪ��
void head_insert(int data);//��������ͷ��
void display();
void init(int data);
void nail_insert(int data);
void insert(int loc, int data);
int main(){
	init(1);//�ṹ���ʼ��
	/*
	head_insert(11);
	head_insert(112);
	head_insert(113);
	nail_insert(115);
	nail_insert(1152);
	insert(1,23);
	insert(6, 233);
	*/
	insert(1, 23);
	insert(2, 33);
	insert(3, 44);
	display();
	return 0;
}
void insert(int loc, int data){
	node * p = (node *)malloc(sizeof(node));//��ʼ��Ҫ������¿ռ�
	node * temp = head;//��head����ʱ����temp��Ϊ��ѭ������
	node * before = NULL;//��Ϊbefore��¼����tempǰ���ֵ������tempΪ��һ��ֵ����before��Ϊ��
	int i = 1;//ѭ����Ŀ��λ��
	p->data = data;//�������ֵ������ʱ������
	p->next = NULL;//��һ���ĵ�ַָ���
	if (loc == 1){
		//�����ͷ�壬�����ͷ�庯��
		head_insert(loc);
	}
	else{
		//����Ļ����������м���ˣ��������
		//1�������λ����Ч
		//2�������λ����Ч����������������û�ҵ�����ʾһ��
		while (temp->next != NULL&&loc != i)
		{
			before = temp;
			temp = temp->next;//��tempָ�����һ��λ�õĵ�ַ
			i++;
		}
		if (i == loc)//��һ�����
		{

			before->next = p;
			p->next = temp;
		}
		else if (temp == NULL)
		{
			//β��
			nail_insert(data);
		}
		//�ڶ������
		else{
			printf("\nλ����Ч!");
		}
	}
}
void nail_insert(int data){
	node *temp = head;
	node *p = (node*)malloc(sizeof(node));
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = p;//temp�ĵ�ַ����ѭ��������������ָ��ĵ�ַΪ���һ�������Ԫ�أ���Ҫ����ĵ�ַ����temp��
	p->data = data;
	p->next = NULL;//�����һ�������nextָ��Ϊ��

}
void init(int data){
	node* p = (node*)malloc(sizeof(node));
	p->data = data;
	p->next = NULL;
	head = p;//��p��ֵ�����ڵ�һ��Ԫ����
}
void display(){
	node * temp = head;
	do{
		printf("%d\t", temp->data);
		temp = temp->next;
	} while (temp->next != NULL);
	printf("\n");
}
void head_insert(int data){
	node * p = (node *)malloc(sizeof(node));
	p->data = data;
	p->next = head;
	head = p;

}