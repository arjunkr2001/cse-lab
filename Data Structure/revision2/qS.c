#include<stdio.h>
int partition(int a[],int l,int h){
	int pivot = a[h];
	int i=(l-1);
	for(int j=l;j<h;j++){
		if(a[j] <= pivot){
			i++;
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	int t=a[i+1];
	a[i+1]=a[h];
	a[h]=t;
	return (i+1);
}
void qS(int a[],int l,int h){
	if(l<h){
		int pi=partition(a,l,h);
		qS(a,l,pi-1);
		qS(a,pi+1,h);
	}
}
void main(){
	int a[10],i,n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qS(a,0,n-1);
	printf("sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}