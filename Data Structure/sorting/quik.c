#include<stdio.h>
int partition(int a[],int l,int h){
	int i=l-1;
	int pivot=a[h];
	for(int j=l;j<h;j++){
		if(a[j] <= pivot){
			i++;
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	int t=a[h];
	a[h]=a[i+1];
	a[i+1]=t;
	return i+1;
}
void quik(int a[],int l,int h){
	if(l<h){
		int pi = partition(a,l,h);
		quik(a,l,pi-1);
		quik(a,pi+1,h);
	}
}

void main(){
	int a[10],n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quik(a,0,n-1);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}