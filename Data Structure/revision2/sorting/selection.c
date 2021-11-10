#include<stdio.h>
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("sorted array is: \n\n");
	for(int i=0;i<n-1;i++){
		int min_idx = i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min_idx])
				min_idx = j;
		int t=a[i];
		a[i]=a[min_idx];
		a[min_idx]=t;
	}
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}