#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int q[MAX],front=-1,rear=-1;
void insert(){
	if(rear==MAX-1)
		printf("Queue is full!\n");
	else{
		if(front==-1)
			front=0;
		printf("enter data: ");
		scanf("%d",&q[++rear]);
	}
}
void delete(){
	if((front==-1)&&(front>rear))
		printf("queue is empty!\n");
	else
		printf("%d deleted.",q[front++]);
}
void display(){
	if(front==-1)
		printf("queue empty!\n");
	else
		for(int i=front;i<=rear;i++)
			printf("%d ",q[i]);
}
void main(){
	int c;
	while(1){
		printf("\n1.insert\n2.delete\n3.display\n4.exit\n :");
		scanf("%d",&c);
		switch(c){
			case 1:insert();break;
			case 2:delete();break;
			case 3:display();break;
			case 4:exit(1);
			default:printf("wrong choice!\n");
		}
	}
}