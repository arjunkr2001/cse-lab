#include<stdio.h>
int a[10],i,j,n,min_indx,t;
void main(){
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//selection sort
	for(i=0;i<n;i++){
		min_indx = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_indx])
				min_indx = j;
		}
		t = a[min_indx];
		a[min_indx] = a[i];
		a[i] = t;	
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}