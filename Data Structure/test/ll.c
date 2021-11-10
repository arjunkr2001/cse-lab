#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void main(){
	struct node *f;
	struct node *l;
	struct node *t;
	struct node *p;
	int c,d;
	while(c!=0){
		printf("1.mk,2.i@f,3.i@e,4.i@m,5.d@f,6.d@e,7.d@m,8.dsp,0.xt\n\t");
		scanf("%d",&c);
		if(c==1){
			f = (struct node*)malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&d);
			f->data = d;
			f->next = NULL;
		}
		if(c==2){
			t = (struct node*)malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&d);
			t->data = d;
			t->next = f;
			f = t;
		}
		if(c==8){
			t = f;
			while(t != NULL){
				printf("%d",t->data);
				t = t->next;
			}
		}
	}
}