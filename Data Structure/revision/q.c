#include<stdio.h>
int max = 50;
int Q[50];
int front = -1;
int rear = -1;
void enQ(){
	int d;
	if(rear == max-1)
		printf("queue overflow!");
	else{
		if(front==-1)
			front = 0;
		printf("enter element: ");
		scanf("%d",&d);
		rear++;
		Q[rear] = d;
	}
}
void deQ(){
	if(front==-1 || front>rear){
		printf("queue underflow!");
	}
	else{
		printf("%d removed",Q[front]);
		front++;
	}
}
void display(){
	if(front==-1)
		printf("q is empty!");
	else{
		for(int i=front;i<=rear;i++)
			printf("%d",Q[i]);
	}
}
void main(){
	int c=0;
	printf("1.enQ 2.deQ 3.display 4.exit");
	while(c!=4){
		scanf("%d",&c);
		if(c==1)
			enQ();
		else if(c==2)
			deQ();
		else if(c==3)
			display();
	}
}