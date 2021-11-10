#include<stdio.h>
int a[10],i,j,t,n,low,high,pi,pivot;
void swap(int *a, int *b){
	t = *a;
	*a = *b;
	*b = t;
	
}
int partition(int a[],int low,int high){
	pivot = a[high];
	i= (low-1);
	for(j = low; j < high; j++){
		if(a[j] <= pivot){
			i++;
			swap(&a[i],&a[j]);
			//t=a[i];
			//a[i]=a[j];
			//a[j]=t;
		}
	}
	//t=a[i+1];
	//a[i+1]=a[j];
	//a[t]=t;
	swap(&a[i+1],&a[high]);
	return (i+1);
}
void qksrt(int a[],int low,int high){
	if(low<high){
		pi = partition(a,low,high);
		qksrt(a,low,pi-1);
		qksrt(a,pi+1,high);
	}
}
void main(){
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qksrt(a,0,n-1);
	printf("\n sorted list: \n");
	for(i=0;i<n;i++)
		printf(" %d",a[i]);
}