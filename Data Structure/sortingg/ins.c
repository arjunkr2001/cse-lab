#include<stdio.h>
void ins(int a[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int k = a[i]
		while(k<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
}
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	ins(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}