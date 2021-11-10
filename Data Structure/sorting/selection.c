#include<stdio.h>
int a[10],i,j,n,min_indx;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
void selection(int a[]){
	for(i=0;i<n;i++){
		min_indx = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_indx])
				min_indx = j;
		}
		swap(&a[i],&a[min_indx]);
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
void main(){
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	selection(a);
}