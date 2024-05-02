#include<stdio.h>
#include<stdlib.h>
int flag=0;
int count=0;
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
printf("Enter the data for node : ");
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
printf("%d",root->data);
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
////////////////////////////////////////////////////////////
int hight_tree(struct node *root){
int hr,hl;
if(root==NULL){
return 0;
}
else{
hl=hight_tree(root->left);
hr=hight_tree(root->right);



if(hl>hr)
return (hl+1);

else
return (hr+1);
}
}

int bal(struct node *root){
int hr,hl;
if(root==NULL){
return 0;
}
else{
hl=hight_tree(root->left);
hr=hight_tree(root->right);

if(hr==hl || hl-hr==1 ||hl-hr==-1){
count++;

}
if(count>0){
printf("balance tree");
}
else
printf("unbalence");
}return;
}


 void mirror(struct node *root){
struct node *temp;
if(root==NULL)
return;
temp=root->right;
root->right=root->left;
root->left=temp;
mirror(root->left);
mirror(root->right);
}




void main(){

struct node *root=NULL;
root=create_tree(root);
inorder(root);
printf("\n");
mirror(root);
inorder(root);
printf("\n");


}
