#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *ptr;

void insertnode(struct node *ptr,int value){
	if(ptr==NULL){
		ptr =malloc(sizeof(struct node));

		if(ptr !=NULL){
			ptr->data = value;
			ptr->left =NULL;
			ptr->right =NULL;
		}
		else{
			printf("%d not inserted. no memory avalilable\n", value);
		}
	}

	else{
		if(value < ptr->data){
			insertnode(ptr->left,value);
		}

		else if(value > ptr->data){
			insertnode(ptr->left,value);
		}
		else{
			printf("dup");
		}
	}
}

void inorder(struct node *ptr){
	if(ptr!=NULL){
		inorder(ptr->left);
		printf("%3d ",ptr->data);
		inorder(ptr->right);
	}
}

void preorder(struct node *ptr){
	if(ptr!=NULL){
		printf("%3d ",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}

void postorder(struct node *ptr){
 		if(ptr!=NULL){
                postorder(ptr->left);
                postorder(ptr->right);
		printf("%3d ",ptr->data);
        }
}


int main(void){
	int i=0;
	int item=0;
	struct node *root=NULL;
	srand(time(NULL));
	printf("the number being placed in the tree are :\n");

	for(int i=1;i<=10;i++){
		item=rand() % 5;
		printf("%3d",item);
		insertnode(root,item);
	}
	printf("\n\n the preorder treversal is :\n");
	preorder(root);

	printf("\n\n the inorder treversal is :\n");
        inorder(root);

	printf("\n\n the postorder treversal is :\n");
        postorder(root);

	return 0;
}

