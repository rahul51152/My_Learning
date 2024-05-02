#include<stdio.h>
#include<stdlib.h>
int flag=0;
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *createnode(int data){
struct node *new=malloc(sizeof(struct node));
new->data=data;
new->left=NULL;
new->right=NULL;
return new;

}



struct node *create_tree(struct node*root)
{
int data;
printf("Enter the the data for node : ");
scanf("%d",&data);
if(data==-1)
return NULL;
root=createnode(data);
root->left=create_tree(root->left);
root->right=create_tree(root->right);
return root;
}

void inorder(struct node *root){

if(root==NULL)
return;

inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);


}

void preorder(struct node *root){

if(root==NULL)
return;

printf("%d\n",root->data);
preorder(root->left);
preorder(root->right);


}

void postorder(struct node *root){

if(root==NULL){
flag++;
return;
}
postorder(root->left);
postorder(root->right);
printf("%d\n",root->data);

}

void main(){

struct node *root=NULL;
root=create_tree(root);
printf("tree in inorder : \n");
inorder(root);
printf("tree in preorder : \n");
preorder(root);
printf("tree in postorder : \n");
postorder(root);
printf("total leaf node are : %d\n",flag);

}
