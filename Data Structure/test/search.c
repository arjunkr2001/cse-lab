#include<stdio.h>
int search(int a[],int n,int k){
	int l=0,h=n;
	while(l<=h){
		int m=(h+l)/2;
		if(a[m]==k)
			return m;
		else if(a[m]>k)
			h=m-1;
		else if(a[m]<k)
			l=m+1;
	}
}
void main(){
	int a[]={0,1,7,8,10};
	int n=5;
	int k=1;
	int pos=search(a,n,k);
	if(pos!=-1)
		printf("%d found at %d",k,pos);
	else
		printf("not found!");
}