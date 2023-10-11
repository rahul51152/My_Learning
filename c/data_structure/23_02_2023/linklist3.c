#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;

};
 struct node  *start;
struct node *ptr;




void createlist(){
int n;
printf("Enter the number of node :");
scanf("%d",&n);
//first node
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=NULL;
start=new;
ptr=new;
for(int i=1;i<n;i++){
new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=NULL;
ptr->next=new;
ptr=new;
}
}


void insertend(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
struct node *ptr;
new->next=NULL;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=new;
}


 void delete_end(){
struct node *ptr,*ptr1;
ptr=start;
ptr1=start;
ptr1=ptr->next;
while(ptr1->next!=NULL){
ptr=ptr->next;
ptr1=ptr1->next;
}
ptr->next=ptr1->next;
ptr1->next=NULL;
free(ptr1);
}


void delete_frnt(){
struct node *ptr;
ptr->next=start;
free(ptr);
}    



void deleteend(){
struct node *temp;
temp=start;
while(temp->next->next!=NULL){
temp=temp->next;
}
temp->next=NULL;
free(temp->next);
}


void display(){
int i=0;
struct node *ptr;
ptr=start;
while(ptr!=NULL){
printf("%d node , element is : %d\n",i+1,ptr->data);
ptr=ptr->next;
i++;
}

}

void insert_frnt(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
start=new;
}


void insert_after(int data){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
ptr=start;
while(ptr->data!=data){
ptr=ptr->next;
}
new->next=ptr->next->next;
ptr->next=new;
}

void main(){
createlist();
printf("\n");
insert_after(3);
display();
}
