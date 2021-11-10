#include<stdio.h>
void main(){
	int a[10],i,j,t,n;
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//bubble sort
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}