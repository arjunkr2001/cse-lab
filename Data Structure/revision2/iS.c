#include<stdio.h>
void main(){
	int a[10],k,i,j,n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n-1;i++){
		k=a[i];
		j=i-1;
		while(k<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	printf("sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}