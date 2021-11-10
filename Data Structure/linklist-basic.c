#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *i;
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 1;
	head->link = NULL;

	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 2;
	head->link = temp;
	temp->link = NULL;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 3;
	temp->link = NULL;

	head->link->link = temp;

	i = malloc(sizeof(struct node));
	i = head;
	while(i!=0){
		printf("%d ",i->data);
		i = i->link;
	}
}