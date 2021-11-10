#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node *head,*first,*temp;
void main(){
	int c,pos,t,cnt;
	do{
		printf("1.create\n2.insert at first\n3.insert at mid\n4.insert at last\n5.delete first\n6.delete at mid\n7.delete last\n8.display\n10.exit");
		scanf("%d",&c);
		if(c==1){
			head=malloc(sizeof(struct node));
			first=malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&first->data);
			first->next=0;
			head=first;
			cnt=1;
		}
		if(c==2){
			temp=malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&temp->data);
			temp->next=first;
			first=temp;
			head=first;
			cnt++;
		}
		if(c==3){
			printf("enter position: ");
			scanf("%d",&pos);
			t=1;
			head=malloc(sizeof(struct node));
			head=first;
			while(t<pos){
				head=head->next;
				t++;
			}
			temp=malloc(sizeof(struct node));
			printf("enter data: ");
			scanf("%d",&temp->data);
			temp->next=head->next;
			head->next=temp;
			cnt++;
		}
		if(c==4){
			temp=malloc(sizeof(struct node));
			head=first;
			while(head->next!=0)
				head=head->next;
			printf("enter data: ",&temp->data);
			temp->next=0;
			head->next=temp;
			cnt++;
		}
		if(c==5){
			head=first->next;
			free(first);
			first=head;
			cnt--;
		}
		if(c==6){
			printf("enter pos: ");
			scanf("%d",&pos);
			t=1;
			head=first;
			while(t<pos){
				head=head->next;
				t++;
			}
			head->next=head->next->next;
			free(head);
			head=first;
			cnt--;
		}
		if(c==7){
			head=first;
			while(head->next->next!=0){
				head=head->next;
			}
			head->next=0;
			free(head->next);
			cnt--;
		}
		if(c==8){
			head=first;
			while(head!=0){
				printf("\n\t %d",head->data);
				head=head->next;
			}
		}
	}while(c!=10);
}