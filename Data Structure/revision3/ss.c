#include<stdio.h>
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++)
			if(a[min_idx]>a[j])
				min_idx=j;
		int t=a[min_idx];
		a[min_idx]=a[i];
		a[i]=t;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}