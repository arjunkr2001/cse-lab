#include<stdio.h>
int partition(int a[],int l,int h){
	int pivot = a[h];
	int i = l-1;
	for(int j=l;j<h;j++){
		if(a[j]<=pivot){
			i++;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	int tp=a[i+1];
	a[i+1]=a[h];
	a[h]=tp;
	return(i+1);
}
void quickSort(int a[],int l,int h){
	if(l<h){
		int p = partition(a,l,h);
		quickSort(a,l,p-1);
		quickSort(a,p+1,h);
	}
}
void main(){
	int a[]={2,1,3},n=3;
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}