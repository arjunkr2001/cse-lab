#include<stdio.h>
void merge(int a[],int p,int q,int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1],M[n2];
	for(int i=0;i<n1;i++)
		L[i]=a[p+i];
	for(int j=0;j<n2;j++)
		M[j]=a[q+j+1];
	int i,j,k;
	i=0;
	j=0;
	k=p;
	while(i<n1 && j<n2){
		if(L[i]<=M[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=M[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=M[j];
		j++;
		k++;
	}
}
void mS(int a[],int l,int h){
	if(l<h){
		int mid = l+(h-l)/2;
		mS(a,l,mid);
		mS(a,mid+1,h);
		merge(a,l,mid,h);
	}
}
void main(){
	int a[10],i,n;
	printf("enter no.of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mS(a,0,n-1);
	printf("sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}