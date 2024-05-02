//binary search tree implementation
#include<stdio.h>
#include<stdlib.h>
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
///////////////////////////////////////////////////////////////////////////////////////////////////
struct node *insert_bst(struct node *root,int data){
if(root==NULL){
root=createnode(data);
}
else{
if(data< root->data){
root->left=insert_bst(root->left,data);
}
else
{
root->right=insert_bst( root->right,data);
}
return root;
}
}
/////////////////////////////////////////////////////////////////////////////////////////////////
struct  node *takeinput(struct node *root){
int data;
printf("Enter data for Node : ");
scanf("%d",&data);
while(data!=-1){
root=insert_bst(root,data);
printf("Enter data for Node : ");
scanf("%d",&data);

}
return root;
}

//////////////////////////////////////////////////////////////////////////////////////////////
void inorder(struct node *root){

if(root==NULL)
return;

inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);

}
///////////////////////////////////////////////////////////////////////////////////////////////
int min(struct node *root){
if(root->left==NULL)
return root->data;

min(root->left);
}
///////////////////////////////////////////////////////////////////////////////////////////////
int max(struct node *root){
if(root->right==NULL)
return root->data;

max(root->right);
}
///////////////////////////////////////////////////////////////////////////////////////////////

void main(){
struct node *root;
root=takeinput(root);
printf("\n");
inorder(root);
printf("min number in the node : %d\n",min(root));
printf("max number in the node : %d\n",max(root));
}
