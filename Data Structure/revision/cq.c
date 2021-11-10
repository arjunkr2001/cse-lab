#include<stdio.h>
#define MAX 5
int front=-1,rear=-1,a[MAX];
void insert(int item){
	if((front==0 && rear==MAX-1)||(front==rear+1))
		printf("Queue overflow!");
	if(front==-1){
		front=0;
		rear=0;
	}
	else{
		if(rear==MAX-1)
			rear=0;
		else
			rear=rear+1;
	}
	a[rear]=item;
}
void delete(){
	if(front==-1)
		printf("Queue underflow!");
	printf("%d is deleted",a[front]);
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else{
		if(front==MAX-1)
			front=0;
		else
			front=front+1;
	}
}
void display(){
	int f=front,r=rear;
	if(front==-1)
		printf("Queue is empty");
	if(f<=r)
		while(f<=r){
			printf("%d ",a[f]);
			f++;
		}
	else{
		while(f<=MAX-1){
			printf("%d ",a[f]);
			f++;
		}
	}
	printf("\n ");
}
void main(){
	int c,item;
	do{
		printf("1.insert\n2.delete\n3.display\n4.exit");
		scanf("%d",&c);
		if(c==1){
			printf("enter element: ");
			scanf("%d",&item);
			insert(item);
		}
		if(c==2)
			delete();
		if(c==3)
			display();
	}while(c!=4);
}