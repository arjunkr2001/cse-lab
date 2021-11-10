#include<stdio.h>
#include<stdlib.h>
int s[20],top=-1;
void push(int max){
	int x;
	if(top==max-1)
		printf("stack overflow");
	else{
		printf("enter the item");
		scanf("%d",&x);
		top++;
		s[top]=x;
	}
}
void pop(){
	int x;
	if(top==-1)
		printf("stack empty");
	else{
		x=s[top];
		top--;
		printf("%d poped",x);
	}
}
void display(){
	int i;
	if(top==-1)
		printf("stack is empty");
	else{
		printf("elements are:\n");
		for(i=top;i>=0;i--)
			printf("%d",s[i]);
	}
}
void main(){
	int x,c,max;
	printf("enter size of stack:\n");
	scanf("%d",&max);
	while(c!=5){
		printf("\t1.push\n");
		printf("\t2.pop\n");
		printf("\t3.display\n");
		printf("\t4.display top element\n");
		printf("\t5.quit\n");
		scanf("%d",&c);
		switch(c){
			case 1:
				push(max);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				if(top==-1){
					printf("stack is empty");
					break;
				}
				printf("\n%d",s[top]);
				break;
			case 5: exit(0); break;
			default:
				printf("??.");
		}
	}
}