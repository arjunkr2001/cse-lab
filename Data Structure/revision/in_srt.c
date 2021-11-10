#include<stdio.h>
void insertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int k = a[i];
		int j = i-1;
		while(k<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(int k=0;k<n;k++)
		printf("%d",a[k]);
}
void main(){
	int n,a[10];
	printf("enter no.of elemnts: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertionSort(a,n);
}