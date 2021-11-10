#include<stdio.h>
int partition(int a[],int l,int h){
	int pivot=a[h];
	int i=l-1;
	for(int j=l;j<h;j++){
		if(a[j]<=pivot){
			i++;
			int t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
	int t=a[i+1];
	a[i+1]=a[h];
	a[h]=t;
	return i+1;
}
void qsort(int a[],int l,int h){
	if(l<h){
		int pi=partition(a,l,h);
		qsort(a,l,pi-1);
		qsort(a,pi+1,h);
	}
}
void main(){
	int a[]={8,5,1,2,7};
	int n=5;
	qsort(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}