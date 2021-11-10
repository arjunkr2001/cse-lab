#include<stdio.h>
int ls(int a[],int k,int n){
	for(int i=0;i<n;i++)
		if(a[i]==k)
			return i;
	return -1;
}
void main(){
	int i,n,k,a[10];
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to search: ");
	scanf("%d",&k);
	int r = ls(a,k,n);
	(r!=-1)?printf("%d found at %d",k,r):printf("not found");
}