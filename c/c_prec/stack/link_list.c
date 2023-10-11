#include<stdio.h>
#include<stdlib.h>
struct node {
	char name[20];
	int data;
	struct node *next;
};

struct node *start;
struct node *ptr;

void create(){
	int n;
	struct node *new;
	printf("how many number of data you want to store : ");
	scanf("%d",&n);
	new=malloc(sizeof(struct node));
	printf("Enter name :");
	scanf("%s",new->name);
	printf("Enter mark :");
	scanf("%d",&new->data);
	new->next=NULL;
	start=new;
	ptr=new;
	for(int i=1;i<n;i++){
		new=malloc(sizeof(struct node));
		printf("Enter name :");
		scanf("%s",new->name);
		printf("Enter mark :");
		scanf("%d",&new->data);
		ptr->next=new;
		new->next=NULL;
		ptr=new;
	}
}


void display(){
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		printf("%s\t%d\n",temp->name,temp->data);
		temp=temp->next;
	}
}

int main(){
	create();
	display();
	return 0;
}


