#include<stdio.h>
int a[10],i,j,t,n,l,h,pi,pivot;
int partition(int a[],int l,int h){
	pivot = a[h];
	i=l-1;
	for(j=l;j<h-1;j++){
		if(pivot >= a[j]){
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[h];
	a[h]=t;
	return i+1;
}
void quickSort(int a[],int l,int h){
	if(l<h){
		pi = partition(a,l,h);
		quickSort(a,l,pi-1);
		quickSort(a,pi+1,h);
	}
}
void main(){
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,n-1);
	printf("\n sorted list: \n");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}