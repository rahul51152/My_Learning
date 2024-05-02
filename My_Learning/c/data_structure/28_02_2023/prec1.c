#include<stdio.h>
#include<stdlib.h>
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

void create_list(){
int n;
printf("How many node you want : ");
scanf("%d",&n);
struct node *new,*ptr;
new=createnode();
start=new;
ptr=start;
for(int i=1;i<n;i++){
new=createnode();
ptr->next=new;
ptr=new;
}
}
 void display()
{
int i=0;
struct node *ptr;
ptr=start;
while(ptr!=NULL){
printf("Node %d , and value of node :  %d\n", i+1,ptr->data);
i++;
ptr=ptr->next;
}
printf("----------------------------------------------\n");
}

void swapafter(int data)
{ 
int a;
struct node *temp,*temp1;
temp=start;
//temp1=start;
temp1=temp->next;
while(temp->data!=data){
temp=temp->next;
temp1=temp1->next;
}
a=temp1->data;
temp1->data=temp->data;
temp->data=a;
}




void main()
{int p;
create_list();
printf("Enter the data : ");
scanf("%d",&p);
swapafter(p);
display();
}


