#include<stdio.h>
void selsort(int a[], int n){
	for(int i=0;i<n;i++){
		int minidx = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minidx]){
				minidx=j;
			}
		}
		int t = a[i];
		a[i]=a[minidx];
		a[minidx]=t;
	}
}
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	selsort(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}