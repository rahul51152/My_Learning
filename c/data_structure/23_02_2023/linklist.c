#include<stdio.h>
struct node {
int data;
struct node *next;

};

struct node *start;
 void main(){
struct node *ptr;
struct node *n1=malloc(sizeof(struct node));
struct node *n2=malloc(sizeof(struct node));
struct node *n3=malloc(sizeof(struct node));
n1->data=10;
n1->next=n2;
 start=n1;
n2->data=20;
n2->next=n3;

n3->data=30;
n3->next=NULL;

int i=0;
ptr=start;
while(ptr!=NULL){
printf("node=%d,value=%d\n",i+1,ptr->data);
i++;
ptr=ptr->next;
}

}
