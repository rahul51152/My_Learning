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
struct node *min_node (struct node *root){
{
if(root->left==NULL){
return root;
}

min_node(root->left);
}
}
///////////////////////////////////////////////////////////////////////////////////////////////
struct node * delete(struct node *root  ,int data){
if(root==NULL){
return root;
}

if(data< root->left){
root->left=delete(root->left,data);
}

else if(data> root->data)
{
root->right=delete(root->right,data);
}


else{
       if(root->left==NULL){
        struct node *temp=root->right;
       free(root);
       return temp;
        }
       
      if(root->right==NULL){
        struct node *temp=root->left;
       free(root);
       return temp;
        }

    struct node *min=min_node(root->right);
     root->data=min->data;

root->right=delete(root->right,min->data);
}


return root;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
void main(){
int n;
struct node *root;
root=takeinput(root);
printf("\n");
inorder(root);
//scanf("%d",&n);
int x=delete(root,40);
inorder(root);
}
