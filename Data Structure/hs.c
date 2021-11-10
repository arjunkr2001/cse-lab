#include<stdio.h>
void heapSort();
void heapify();
void main(){
	int a[10],n,i;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	heapSort(a,n,i);
	printf("sorted array is : ");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
void heapSort(int a[],int n,int i){
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>-0;i--){
		int t=a[i];
		a[i]=a[0];
		a[0]=t;
		n--;
		heapify(a,i,0);
	}
}
void heapify(int a[],int n,int i){
	int max=i;
	int lc=2*i+1;
	int rc=2*i+2;
	if(lc<n && a[lc]>a[max])
		max=lc;
	if(rc<n && a[rc]>a[max])
		max=rc;
	if(max!=i){
		int t=a[max];
		a[max]=a[i];
		a[i]=t;
		heapify(a,n,max);
	}
}