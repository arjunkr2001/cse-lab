#include<stdio.h>
void main(){
	int a = 1;
	printf("%d\t",a);
	printf("%d\t\t",&a);
	printf("%d\t\n\n",*&a);
	
	int x = &a;
	int *p = &a;
	int *z = a;//
	printf("%d\n",x);		//2686780
	printf("%d\n",*p);
	//printf("%d\n",*z);
	printf("%d\n",p);
	printf("%d\n",z);
}

/*
	& = address of 
	
	* = value at 
	
	*p=&a => p= address of a
			  = &a
			*p= value at p
			  = value at &a
			  = value at address of a
	
*/
