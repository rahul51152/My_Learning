#include<stdio.h>
struct node {
int data;
struct node *next;

};
 struct node  *start;
struct node *ptr;
struct node *last;
///////////////////////////////////////////////////////////////////////////////////////////

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
last=new;
for(int i=1;i<n;i++){
new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
last->next=new;
last=new;
}
}
/////////////////////////////////////////////////////////////////////////////////////////////
void insertafter(int data){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
while(last->data!=data){
last=last->next;
}
new->next=last->next;
last->next=new;


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void insertfront(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
if(start ==NULL){
start=new;

}
else{
new->next=start;
start=new;
last->next=start;
}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void insertend(){
struct node *new=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new->data);
new->next=start;
while(last->next!=start){
last=last->next;
}
last->next=new;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void deletefirst(){

struct node *temp;
if(start ==NULL){
printf("list is empty");

}
else if(start->next==start){
start=NULL;
temp=NULL;
free(temp);
}
else{
temp=start;
start=start->next;
last->next=start;
free(temp);
}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void deleteend(){
struct node *temp,*pre;
temp=start;

while(temp->next!=start){
pre=temp;
temp=temp->next;
}
pre->next=start;
last=pre;
free(temp);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void displaylist(){
struct node *ptr;
int i=0;
ptr=start;
if(start==NULL){
printf("list is empty");
}
else{
do{
printf("node=%d,value=%d\n",i+1,ptr->data);
i++;
ptr=ptr->next;
}while(ptr!=start);
}
}
///////////////////////////////////////////////////////////////////
void deleteend1(){
struct node *temp;
temp=start;
while(temp->next->next!=start){
temp=temp->next;
}
temp->next=NULL;
free(temp->next);
}
////////////////////////////////

void main(){
createlist();
displaylist();
deleteend1();
displaylist();

}
