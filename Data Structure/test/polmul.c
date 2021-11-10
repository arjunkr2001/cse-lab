#include<stdio.h>
void main(){
	int d1,d2;
	printf("enter degree of 1st polynomial: ");
	scanf("%d",&d1);
	int p1[d1];
	for(int i=d1;i>=0;i--){
		printf("coeff of x^%d: ",i);
		scanf("%d",&p1[i]);
	}
	printf("enter degree of 2nd polynomial: ");
	scanf("%d",&d2);
	int p2[d2];
	for(int i=d2;i>=0;i--){
		printf("coeff of x^%d: ",i);
		scanf("%d",&p2[i]);
	}
	int prod[d1+d2];
	for(int i=0;i<=d1+d2;i++)
		prod[i]=0;
	for(int i=d1;i>=0;i--){
		for(int j=d2;j>=0;j--){
			if(p1[i]!=0&&p2[j]!=0)
				prod[i+j]+=p1[i]*p2[j];
		}
	}
	for(int i=d1+d2;i>=0;i--){
		if(prod[i]!=0){
			if(i!=0)
				printf("%dx^%d + ",prod[i],i);
			else
				printf("%dx^%d\n",prod[i],i);
		}
	}
}