#include<stdio.h>
void selsrt(int a[],int n){
	for(int i=0;i<n;i++){
		int min_idx=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
		int t=a[i];
		a[i]=a[min_idx];
		a[min_idx]=t;
	}
	for(int k=0;k<n;k++)
		printf("%d,",a[k]);
}
void main(){
	int n,a[10];
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	selsrt(a,n);
}