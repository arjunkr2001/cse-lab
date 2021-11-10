#include<stdio.h>
void main(){
	int i, j, l, min, t, a[10];
	printf("enter size of array: ");
	scanf("%d",&l);
	printf("enter integer elements:\n");
	for(i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++){
		min = i;
		for(j=i+1;j<l;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}
	for(i=0;i<l;i++){
		printf("%d",a[i]);
	}
}