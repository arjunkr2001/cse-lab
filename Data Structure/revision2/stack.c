#include<stdio.h>
#include<stdlib.h>
int s[10],top=-1;
void push(int max){
	if(top==max-1)
		printf("stack overflow!!\n");
	else{
		printf("enter data: ");
		scanf("%d",&s[++top]);
	}
}
void pop(){
	if(top==-1)
		printf("stack empty!\n");
	else
		printf("%d deleted",s[top--]);
}
void display(){
	if(top==-1)
		printf("stack empty!\n");
	else{
		for(int i=top;i>=0;i--)
			printf("%d\n",s[i]);
	}
}
void main(){
	int max,c;
	printf("enter stack capacity: ");
	scanf("%d",&max);
	while(1){
		printf("1.insert\n2.delete\n3.display\n4.exit\n :");
		scanf("%d",&c);
		switch(c){
			case 1:push(max);break;
			case 2:pop(max);break;
			case 3:display();break;
			case 4:exit(1);
			default:printf("wrong choice!!");
		}
	}
}