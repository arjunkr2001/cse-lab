#include<stdio.h>
int bs(int a[],int k,int l,int h){
	while(l<=h){
		int m = l+(h-l)/2;
		if(a[m]==k)
			return m;
		if(a[m]<k)
			l = m+1;
		else if(a[m]>k)
			h = m-1;
	}
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
	int r = bs(a,k,0,n);
	(r!=-1)?printf("%d found at %d",k,r):printf("not found");
}