#include<stdio.h>
void main(){
	int d1,d2,z;
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
	d1>=d2?z=d1: (z=d2);
	int r[z];
	for(int i=0;i<=z;i++)
		r[i]=0;
	for(int i=z;i>=0;i--){
		for(int j=z;j>=0;j--){
			if(i==j)
				r[i]=p1[i]+p2[j];
		}
	}
	for(int i=z;i>=0;i--){
		if(i!=0)
			printf("%dx^%d + ",r[i],i);
		else
			printf("%dx^%d\n",r[i],i);
	}
}