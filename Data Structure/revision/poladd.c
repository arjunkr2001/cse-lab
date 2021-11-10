#include<stdio.h>
struct poly{
	int coeff;
	int exp;
};
struct poly a[20],b[20],r[20];
void main(){
	int i,deg1,deg2;
	int k=0,l=0,m=0;
	printf("enter degree of polynomial 1: ");
	scanf("%d",&deg1);
	for(i=deg1;i>=0;i--){
		printf("enter coeff of x^%d",i);
		scanf("%d",&a[i].coeff);
		a[i].exp=i;
	}
	printf("enter degree of polynomial 2: ");
	scanf("%d",&deg2);
	for(i=deg2;i>=0;i--){
		printf("enter coeff of x^%d",i);
		scanf("%d",&b[i].coeff);
		a[i].exp=i;
	}
	int big = deg1>deg2?deg1:deg2;
	for(i=0;i<=big;i++)
		r[i].coeff=0;
	for(i=big;i>=0;i--){
		for(int j=big;j>=0;j--){
			if(i==j){
				r[i].coeff=a[i].coeff+b[i].coeff;
				r[i].exp=i;
			}
		}
	}
	printf("\n\n");
	for(i=big;i>=0;i--){
		if(r[i].coeff!=0){
			if(i!=0){
				printf("%dx^%d +",r[i].coeff,r[i].exp);
			}
			else{
				printf("%dx^%d",r[i].coeff,r[i].exp);
			}
		}
	}
}