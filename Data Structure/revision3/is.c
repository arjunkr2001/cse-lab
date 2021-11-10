#include<stdio.h>
void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<n;i++){
		int k=a[i];
		int j=i-1;
		while(k<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}