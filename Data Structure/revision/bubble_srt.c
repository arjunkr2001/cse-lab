#include<stdio.h>
void bubbleSort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(int k=0;k<n;k++)
		printf("%d",a[k]);
}
void main(){
	int i,n,a[10];
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubbleSort(a,n);
}