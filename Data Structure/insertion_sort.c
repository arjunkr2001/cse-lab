#include<stdio.h>
int a[10],i,j,n,k;
void main(){
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//insertion sort
	for(i=1;i<n;i++){
		k = a[i];
		j=i-1;
		while(j>=0 && a[j]>k){
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1] = k;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}