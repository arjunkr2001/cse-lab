#include<stdio.h>
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("sorted array is: \n\n");
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[j]<a[i]){
				int t= a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}