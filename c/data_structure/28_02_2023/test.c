#include<stdio.h>
#include<stdlib.h>
int n;
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
{ 
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
///////////////////////////////////////////////////////////////
void delete_n(int p){

struct node *temp;
int i=0;
temp=start;
while((n-i-1)!=p){
temp=temp->next;
i++;
}
temp->next=temp->next->next;
}
//////////////////////////////////////////////////////////////////////////////
void main(){
create_doubly_list();
int p;
printf("Enter the value of the nth node : ");
scanf("%d",&p);
delete_n(p);
displaylist();

}
