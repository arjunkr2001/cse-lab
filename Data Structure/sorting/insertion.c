#include<stdio.h>
void insertion(int a[],int n){
	int i,j,k;
	for(i=1;i<n;i++){
		j=i-1;
		k=a[i];
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
	insertion(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}