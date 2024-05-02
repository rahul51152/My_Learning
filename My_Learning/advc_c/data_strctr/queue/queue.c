#include<stdio.h>
#include<stdlib.h>
struct qnode{
	int key;
	struct qnode *next;
};

struct queue{
	struct qnode *front ,*rear;
};

struct qnode *newnode(int k){
	struct qnode * temp = (struct qnode *)malloc(sizeof(struct qnode));
	temp->key = k;
	temp->next =NULL;
	return temp;
}

struct queue * createqueue(){
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	q->front = q->rear = NULL;
	return q;
}

void enqueue(struct queue *q,int k){
	struct qnode* temp =newnode(k);

	if(q->rear==NULL){
		q->front = q->rear =temp;
		return ;
	}

	q->rear->next = temp;
	q->rear = temp;
}

struct qnode *dequeue(struct queue *q){
	if(q->front ==NULL){
		return NULL;
	}
	struct qnode *temp = q->front;
	q->front = q->front->next;

	if(q->front ==NULL){
		q->rear=NULL;
	}
	return temp;
} 

int main(){
	struct queue * q =createqueue();
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	struct qnode * n = dequeue(q);
	if(n!=NULL){
		printf("dequeue item is %d",n->key);
	}
	return 0;
}

