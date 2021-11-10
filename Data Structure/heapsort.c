#include<stdio.h>
void heapSort();
void heapify();
void maxHeap();
void main(){
	int a[]={5,6,4,7,9},i;
	int n=5;
	heapSort(a,n);
	printf("sorted array: ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
}
void heapify(int a[],int n,int i){
	int largest=i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && a[left]>a[largest])
		largest=left;
	if(right<n && a[right]>a[largest])
		largest = right;
	if(largest!=i){
		int t=a[i];
		a[i]=a[largest];
		a[largest]=t;
		heapify(a,n,largest);
	}
}
void heapSort(int a[],int n){
	maxHeap(a,n);
	for(int i=n-1;i>=0;i--){
		int t=a[0];
		a[0]=a[i];
		a[i]=t;
		n--;
		heapify(a,i,0);
	}
}
void maxHeap(int a[],int n){
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
}

