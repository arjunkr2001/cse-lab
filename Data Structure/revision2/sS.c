#include<stdio.h>
void main(){
	int a[10],i,j,min_idx,n,t;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(a[min_idx]>=a[j]){
				min_idx = j;
			}
		}
		t=a[min_idx];
		a[min_idx]=a[i];
		a[i]=t;
	}
	
	printf("sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}	