#include<stdio.h>
int a[10],i,j,n,t;
void swap(int *a,int *b){
	t = *a;
	*a = *b;
	*b = t;
}
void bubbleSort(int a[]){
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(&a[i],&a[j]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
void main(){
	printf("enter no. of elements:");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubbleSort(a);
}