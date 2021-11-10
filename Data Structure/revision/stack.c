#include<stdio.h>
int top = -1;
int stack[10];
void push(int max){
	int d;
	if(top==max-1)
		printf("stack overflow");
	else{
		printf("enter element to push: ");
		scanf("%d",&d);
		top++;
		stack[top] = d;
	}
}
void pop(){
	int x;
	x = stack[top];
	top--;
	printf("%d poped",x);
}
void display(){
	for(int i=0;i<=top;i++)
		printf("%d",stack[i]);
}
void main(){
	int c;
	int max = 10;
	printf("1.push, 2.pop, 3.display, 4.exit");
	while(c!=4){
		scanf("%d",&c);
		if(c==1)
			push(max);
		else if(c==2)
			pop();
		else if(c==3)
			display();
	}
}