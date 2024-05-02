#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
struct node *prev;
};

struct node *start;
struct node *last;

//////////////////////////////////////////////////////
struct node *createnode(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=NULL;
new->prev=NULL;
return new;
}
////////////////////////////////////////////////////////

void create_doubly_list()
{  int n;
printf("enter the number of node : ");
scanf("%d",&n);
struct node *new;
new=createnode();
start=new;
last=new;
for (int i=1;i<n;i++){
new=createnode();
last->next=new;
new->prev=last;
last=new;
}
}

//////////////////////////////////////////////////////
void displaylist(){
struct node *ptr;
int i=0;
ptr=start;
 while(ptr!=NULL){
  printf("node= %d, and value at node= %d",i+1,ptr->data);
 i++;
ptr=ptr->next;
printf("\n");
}
printf("---------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////
void insertfront(){
struct node*new;
new=createnode();
if(start==NULL){
start=new;
last=new;
}
else{
new->next=start;
start=new;
}

}


void insertedfrnt(){
struct node *new;
new=createnode();
new->next=start;
start->prev=new;
start=new;
}
/////////////////////////////////////////////////////////////////////
void insertend(){
struct node *new;
new=createnode();
if(start==NULL){
start=new;
last=new;
}
while(last->next!=NULL){
last=last->next;
}
last->next=new;
new->prev=last;

}
/////////////////////////////////////////////////
void insertafter(int data){
struct node *new;
new=createnode();
struct node *temp;
temp=start;
while(temp->data!=data){
temp=temp->next;
}
new->next=temp->next;
new->prev=temp;
new->next->prev=new;
new->prev->next=new;


}

//////////////////////////////////////////////////////////////////////////////////////////////
void insertbefore(int data){
struct node *new;
new=createnode();
struct node *temp;
temp=start;
while(temp->next->data!=data){
temp=temp->next;
}
new->next=temp->next;
new->prev=temp;
new->next->prev=new;
new->prev->next=new;
}
///////////////////////////////////////////////////////////////////////////////////////////////
void deletefirst(){

struct node *temp;
temp=start;
start=start->next;
free(temp);
}
////////////////////////////////////////////////////////////////////////////////////////////
void deleteend(){
struct node *temp;
temp=start;
while(temp->next->next!=NULL){
temp=temp->next;
}
temp->next=NULL;
free(temp->next);
}

//////////////////////////////////////////////////////////////////////////////////////////

void main(){
create_doubly_list();
insertedfrnt();
insertend();
displaylist();

}

