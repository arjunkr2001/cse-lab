#include<stdio.h>
void main(){
	int a[10],k,i,n, f=0;
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to search: ");
	scanf("%d", &k);
	//linear search
	for(i=0;i<n;i++)
		if(a[i]==k){
			printf("%d found at %d",k,i);
			f=1;
			break;
		}
	if(f==0){
		printf("element not found");
	}
}