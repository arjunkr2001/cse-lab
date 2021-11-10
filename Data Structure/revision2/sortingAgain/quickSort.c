#include<stdio.h>
int partition(int a[],int l,int h){
	int pivot = a[h];
	int i = (l-1);
	for(int j=l;j<h;j++){
		if(a[j]<=pivot){
			i++;
			int t =a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	int t=a[i+1];
	a[i+1]=a[h];
	a[h]=t;
	return (i+1);
}
void quickSort(int a[],int l,int h){
	if(l<h){
		int pi = partition(a,l,h);
		quickSort(a,l,pi-1);
		quickSort(a,pi+1,h);
	}
}
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("sorted array: ");
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}