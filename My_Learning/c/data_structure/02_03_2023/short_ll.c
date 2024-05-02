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


void shorted_list(){
int  a;
struct node *ptr;
ptr=start;
while(ptr->next!=NULL){
if(ptr->data >ptr->next->data){
a=ptr->data;
ptr->data=ptr->next->data;
ptr->next->data=a;
}
else
ptr=ptr->next;
}
}
 

void display(){
int i=0;
struct node *new;
new=start;
while(new!=NULL){

printf("%d node , data is : %d\n",i+1,new->data);
i++;
new=new->next;
}
}

void ins_end(){
struct node *new;
new=malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&new->data);
struct node *ptr;
ptr=start;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=new;
new->next=NULL;
}

void main(){
create_doubly_list();
shorted_list();
ins_end();
display();





}

