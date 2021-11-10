#include<stdio.h>
void main(){
	int i,j,p1,p2;
	printf("enter no.of terms in polinomial 1: ");
	scanf("%d",&p1);
	printf("enter no.of terms in polinomial 2: ");
	scanf("%d",&p2);
	int a[p1],b[p2],p[p1+p2];
	printf("enter polinomial 1\n");
	for(i=0;i<p1;i++){
		printf("enter coefficient of x^%d:",i);
		scanf("%d",&a[i]);
	}
	printf("enter polinomial 2\n");
	for(i=0;i<p2;i++){
		printf("enter coefficient of x^%d:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<p1+p2;i++){
		p[i] = 0;
	}
	for(i=0;i<p1;i++){
		for(j=0;j<p2;j++){
			if(a[i]!=0 && b[j]!=0)
				p[i+j]+=a[i]*b[j];
		}
	}
	printf("\n\n");
	for(i=p1+p2-1;i>=0;i--){
		if(p[i]!=0){
			if(i!=0){
				printf("%dx^%d +",p[i],i);
			}
			else{
				printf("%dx^%d",p[i],i);
			}
		}
	}
}