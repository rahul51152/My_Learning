#include<stdio.h>
#include<stdlib.h>
int n;
int r=-1;
int f=-1;

struct node{
int data;
struct node *next;
};
struct node *start;


struct node *createnode(){
struct node *new =malloc(sizeof(struct node));
printf("Enter the data : ");
scanf("%d",&new->data);
new->next=NULL;
return new;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void create_list(){
printf("How many node you want : ");
scanf("%d",&n);
struct node *new,*ptr;
new=createnode();
start=new;
ptr=new;
r++;
for(int i=1;i<n;i++){
new=createnode();
ptr->next=new;
ptr=new;
r++;
}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void enqueque(int data){
 if(r==n-1){
printf("queue is full");

}
else{
if(f==-1){
f=0;
}
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
r=r+1;
printf("data %d is inserted in the queue, f=%d, r=%d\n",data,f,r);
}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void display()
{
struct node *ptr;
int i=0;
ptr=start;
while(ptr!=NULL){
printf("Node %d , and value of node :  %d\n", i+1,ptr->data);
i++;
ptr=ptr->next;
}
printf("----------------------------------------------\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main(){
create_list();
enqueque(10);
display();
}
