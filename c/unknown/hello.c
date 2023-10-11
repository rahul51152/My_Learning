//normal hello world

#include<stdio.h>
struct node {
char data[10];
};

void main(){
struct node * new;
new=malloc(sizeof(struct node));
scanf("%s",new->data);
}


