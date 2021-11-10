#include<stdio.h>
void merge(int a[],int p,int q,int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1],M[n2];
	for(int i=0;i<n1;i++)
		L[i]=a[p+i];
	for(int j=0;j<n2;j++)
		M[j]=a[q+1+j];
	int i=0,j=0,k=p;
	while(i<n1 && j<n2){
		if(L[i]<=M[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=M[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=M[j];
		j++;
		k++;
	}
}
void mergeSort(int a[],int l,int h){
	if(l<h){
		int m = l+(h-l)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,h);
		merge(a,l,m,h);
	}
}
void main(){
	int n,a[10];
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergeSort(a,0,n-1);
	for(int j=0;j<n;j++)
		printf("%d",a[j]);
}