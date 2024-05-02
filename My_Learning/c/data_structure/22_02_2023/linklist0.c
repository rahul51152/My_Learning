#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;

};

struct node *start;
struct node *ptr;

int main(){
	struct node *n1;
	n1=malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&n1->data);
	n1->next=NULL;
	start=n1;
	ptr=n1;
	for(int i=1;i<5;i++){
		n1=malloc(sizeof(struct node));
		scanf("%d",&n1->data);
		ptr->next=n1;
		n1->next=NULL;
		ptr=ptr->next;
	}
	struct node *temp;
		temp=start;
		int i=1;
	while(temp!=NULL){
		printf("node : %d and data : %d\n",i,temp->data);
		temp=temp->next;
		i++;

	}

	return 0;

}
