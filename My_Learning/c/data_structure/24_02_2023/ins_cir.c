#include<stdio.h>
struct node {
int data;
struct node *next;

};
 struct node  *start;
struct node *ptr;
struct node *first;
struct node *last;


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
new->next=first;
ptr->next=new;
ptr=new;
}
}

void insertafter(int data){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
struct node *temp;
temp=start;
while(temp->data!=data){
temp=temp->next;
}
new->next=temp->next;
temp->next=new;


}

void displaylist(){
struct node *ptr;
int i=0;
ptr=start;
do{
printf("node=%d,value=%d\n",i+1,ptr->data);
i++;
ptr=ptr->next;
}while(ptr!=first);
}

void main(){
createlist();
displaylist();
 insertafter(10);
displaylist();

}
