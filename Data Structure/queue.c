#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int items[SIZE], front=-1, rear=-1;

void enqueue(int item){
	if(rear == SIZE-1)
		printf("\nQueue is full!!");
	else{
		if(front == -1)
			front = 0;
		rear++;
		items[rear]=item;
		printf("\n %d inserted",item);
	}
}
void dequeue(){
	if(front==-1)
		printf("\nQueue is empty!!");
	else{
		front++;
		printf("\n %d deleted",items[front]);
		if(front>rear)
			front = rear = -1;
	}
}
void display(){
	if(rear == -1)
		printf("\nQueue is empty!!");
	else{
		int i;
		printf("\nQueue: ");
		for(i=front;i<=rear;i++)
			printf("\n %d",items[i]);
	}
	printf("\n");
}
void peek(){
	printf("peek: %d",items[front]);
}
void isFull(){
	if(rear == SIZE-1)
		printf("Queue is Full!!");
}
void main(){
	int c, item;
	while(c!=6){
		printf("\n\t MENU\n");
		printf("1.Display\n");
		printf("2.EnQueue\n");
		printf("3.DeQueue\n");
		printf("4.Peek\n");
		printf("5.isFull\n");
		printf("6.Exit\n");
		scanf("%d",&c);
		switch(c){
			case 1: display(); break;
			case 2:
				printf("Enter the element to insert: ");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 3: dequeue(); break;
			case 4: peek(); break;
			case 5: isFull(); break;
			case 6: exit(0); break;
			default: printf("invalid option!!");
		}
	}
}