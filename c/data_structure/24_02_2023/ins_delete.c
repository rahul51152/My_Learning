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
new->next=NULL;
struct node *temp;
temp=start;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=new;

}



void insertafter(int data){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=NULL;
struct node *temp;
temp=start;
while(temp->data!=data){
temp=temp->next;
}
new->next=temp->next;
temp->next=new;


}


void insertbefore(int data){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=NULL;
struct node *temp;
temp=start;
while(temp->next->data!=data){
temp=temp->next;
}
new->next=temp->next;
temp->next=new;
}

void deletefirst(){

struct node *temp;
temp=start;
start=start->next;
free(temp);
}


void insertfront(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
start=new;
}

void deleteend(){
struct node *temp;
temp=start;
while(temp->next->next!=NULL){
temp=temp->next;
}
temp->next=NULL;

}

void displaylist(){
struct node *ptr;
int i=0;
ptr=start;
while(ptr!=NULL){
printf("node=%d,value=%d\n",i+1,ptr->data);
i++;
ptr=ptr->next;
}


}


void main(){
createlist();
deletefirst();
deleteend();
displaylist();
}
