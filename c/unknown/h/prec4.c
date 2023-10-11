#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};

struct node *createnode(int data){
struct node *new =malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;
}


struct node *create_tree(struct node *root){
int data;
printf("enter the data : ");
scanf("%d",&data);
if(data==-1)
return NULL;
root=createnode(data);
root->left=create_tree(root->left);
root->right=create_tree(root->right);

}


void inorder(struct node *root){

if(root==NULL)
return;

inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);


}


