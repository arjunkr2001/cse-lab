//Postfix Evaluation
#include<stdio.h>
#include<ctype.h>
#define MAX 20
int stack[MAX],top=-1;
void push(int item){
	if(top>=MAX-1)
		printf("stack overflow!");
	else
		stack[++top]=item;
}
int pop(){
	if(top<0)
		printf("stack underflow");
	else	
		return stack[top--];
}
void eval(char postfix[]){
	int A,B,i,val;
	char c;
	for(i=0;postfix[i]!=')';i++){
		c = postfix[i];
		if(isdigit(c))
			push(c);
		else{
			A=pop();
			B=pop();
			if(c=='+') val=B+A;
			if(c=='-') val=B-A;
			if(c=='*') val=B*A;
			if(c=='/') val=B/A;
		}
		push(val);
	}
	printf("\n result = %d\n",pop());
}
void main(){
	char postfix[MAX];
	printf("enter postfix expression: ");
	for(int i=0;i<MAX;i++){
		scanf("%c",&postfix[i]);
		if(postfix[i]==')') break;
	}
	eval(postfix);
}