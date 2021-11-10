#include<stdio.h>
void main(){
	int a[10],i,j,n,min_idx,t;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("sorted array is: ");
	for(i=0;i<n-1;i++){
		min_idx = i;
		for(j=i+1;j<n;j++)
			if(a[min_idx]>=a[j])
				min_idx = j;
		t=a[i];
		a[i]=a[min_idx];
		a[min_idx]=t;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}