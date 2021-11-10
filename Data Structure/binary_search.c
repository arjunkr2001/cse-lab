#include<stdio.h>
void main(){
	int a[10],i,j,n,k;
	printf("enter no. of elements: ");
	scanf("%d",&n);
	printf("enter elenents:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to search: ");
	scanf("%d",&k);
	//binary search
	int f=0, l=n-1, mid, done;
	done=0;
	while(f<=l){
		mid=(f+l)/2;
		if(k<a[mid]){
			l=mid-1;
		}
		else if(k==a[mid]){
			printf("%d found at %d",k,mid);
			done=1;
			break;
		}
		else{
			f=mid+1;
		}
	}
	if(done==0)
		printf("not found");
}