#include<stdio.h>
void quickSort();
int partition();
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quickSort(a,0,n-1);
	printf("sorted array: ");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}
void quickSort(int a[],int l,int h){
	if(l<h){
		int pi = partition(a,l,h);
		quickSort(a,l,pi-1);
		quickSort(a,pi+1,h);
	}
}
int partition(int a[],int l,int h){
	int t;
	int i=l-1;
	int pivot = a[h];
	for(int j=l;j<h;j++){
		if(a[j] <= pivot){
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[h];
	a[h]=a[i+1];
	a[i+1]=t;
	return i+1;
}