#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

struct node{
	int data ;
	struct node *next;
};

struct node *ptr;

struct node* fun(){
	struct node *start;
	struct node *new = malloc(sizeof(struct node));
	printf("Enter the data  : ");
	scanf("%d",&new->data);
	new->next=NULL;
	start=new;
	ptr=new;
	for(int i=1;i<5;i++){
		struct node *new = malloc(sizeof(struct node));
	        printf("Enter the data  : ");
	        scanf("%d",&new->data);
	        new->next=NULL;
		ptr->next=new;
	        ptr=new;
	}
	return start;
}

void display(struct node *s1){
	int i=0;
	struct node *tmp;
	tmp=s1;
	while(tmp!=NULL){
		printf("data from %d th node :%d\n",i,tmp->data);
		tmp=tmp->next;
		i++;
	}
}


int main(){
	display(fun());
	return 0;
}



