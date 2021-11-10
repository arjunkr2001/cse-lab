#include<stdio.h>
void main(){
	int a[10],i,j,n,k;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("sorted array: ");
	for(i=1;i<n;i++){
		k = a[i];
		j=i-1;
		while(k<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}