#include<stdio.h>
void sel(int a[],int n){
	for(int i=0;i<n;i++){
		int min_idx = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_idx])
				min_idx=j;
		}
		int t= a[i];
		a[i]=a[min_idx];
		a[min_idx]=t;
	}
}
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sel(a,n);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}