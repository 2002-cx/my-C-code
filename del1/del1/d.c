#include<stdio.h>
#include<malloc.h>
typedef struct node{
	int data;
	struct node * next;
}node;
node * head = NULL;
void display();
void init(int data);
void head_insert(int data);
void insert(int loc, int data);
void del(int loc);
int main(){
	init(1);
	head_insert(2);
	insert(2, 55);
	del(1);
	display();

	return 0;
}
void del(int loc){
	node * before = NULL;
	node * temp = head;
	int i = 1;
	while (temp->next != NULL&&loc != i){
		before = temp;
		temp = temp->next;
		i++;
	}
	if (loc == i)
	{
		before->next = temp->next;
		free(temp);
		printf("删除成功\n");
	}
	else if (i == 1)
	{
		temp = temp->next;
		temp->next = temp->next->next;
		free(temp);
	}

	else{
		printf("输入有误!\n");
	}

}
void insert(int loc, int data){
	node * p = (node *)malloc(sizeof(node));
	node *temp = head;
	node * before = NULL;
	int i = 1;
	p->data = data;
	p->next = NULL;
	if (loc == 1)
	{
		head_insert(data);
	}
	else{
		while (temp->next != NULL&&loc != i){
			before = temp;
			temp = temp->next;
			i++;
		}
		if (i == loc){
			before->next = p;
			p->next = temp;
		}
	}
}
void head_insert(int data){
	node * p = (node *)malloc(sizeof(node));
	p->data = data;
	p->next = head;
	head = p;
}
void display(){
	node * temp = head;
	while (head != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void init(int data){
	node * p = (node *)malloc(sizeof(node));
	p->data = data;
	p->next = NULL;
	head = p;
}