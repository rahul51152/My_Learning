#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;

};
struct node *start;
 struct node  *start1;
struct node * start2;
struct node *ptr1;
struct node *ptr2;
struct node *ptr;

void createlist1(){
int n;
printf("Enter the number of node for first link list :");
scanf("%d",&n);
//first node
struct node *new1=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new1->data);
new1->next=NULL;
start1=new1;
ptr1=new1;
for(int i=1;i<n;i++){
new1=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new1->data);
new1->next=NULL;
ptr1->next=new1;
ptr1=new1;
}
}

void createlist2(){
int n;
printf("Enter the number of node for second link list :");
scanf("%d",&n);
//first node
struct node *new2=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new2->data);
new2->next=NULL;
start2=new2;
ptr2=new2;
for(int i=1;i<n;i++){
new2=malloc(sizeof(struct node));
printf("Enter data for node : ");
scanf("%d",&new2->data);
new2->next=NULL;
ptr2->next=new2;
ptr2=new2;
}
}

void displaylist1(){
struct node *ptr1;
int i=0;
ptr1=start1;
 while(ptr1!=NULL){
  printf("node= %d, and value at node= %d",i+1,ptr1->data);
 i++;
ptr1=ptr1->next;
printf("\n");
}
printf("---------------------------------------------\n");
}


void displaylist2(){
struct node *ptr2;
int i=0;
ptr2=start2;
 while(ptr2!=NULL){
  printf("node= %d, and value at node= %d",i+1,ptr2->data);
 i++;
ptr2=ptr2->next;
printf("\n");
}
printf("---------------------------------------------\n");
}


void short_list1(){
struct node *ptr1;
int a;
ptr1=start1;
while(ptr1->next!=NULL){
if(ptr1->data < ptr1->next->data){
a=ptr1->data;
ptr1->data=ptr1->next->data;
ptr1->next->data=a;
}
else
ptr1=ptr1->next;
}
}

void short_list2(){
struct node *ptr2;
int a;
ptr2=start2;
while(ptr2->next!=NULL){
if(ptr2->data < ptr2->next->data){
a=ptr2->data;
ptr2->data=ptr2->next->data;
ptr2->next->data=a;
}
else
ptr2=ptr2->next;
}
}


void mer_com(){
struct node *new3=malloc(sizeof(struct node));
ptr=start;
new3=start;
while(ptr1->next!=NULL && ptr2->next!=NULL){
if(ptr1->data>ptr2->data){
new3->data=ptr1->data;
}
if(ptr2->data>ptr1->data){
new3->data=ptr2->data;
}
ptr1=ptr1->next;
ptr2=ptr2->next;
new3=new3->next;
}
}

void displaylist(){
struct node *ptr;
int i=0;
ptr=start;
 while(ptr->next!=NULL){
  printf("node= %d, and value at node= %d",i+1,ptr->data);
 i++;
ptr=ptr->next;
printf("\n");
}
printf("---------------------------------------------\n");
}


void main (){
createlist1();
createlist2();
displaylist1();
displaylist2();
short_list1();
short_list2();
displaylist1();
displaylist2();
mer_com();
displaylist();

}
