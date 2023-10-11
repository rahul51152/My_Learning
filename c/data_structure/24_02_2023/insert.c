#include<stdio.h>
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




void insertfront(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
start=new;
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
displaylist();
insertfront();
displaylist();
}
