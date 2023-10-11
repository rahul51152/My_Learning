#include<stdio.h>
int r=-1;
int f=-1;
int q[5];

void enqueque(int data){
	if(r==4){
		printf("queue is full");
	}
	if(f==-1){
		f=0;
	}
	r=r+1;
	q[r]=data;
	printf("data %d is inserted in the queue, f=%d, r=%d\n",q[r],f,r);
}

void dequeque(){
	int data;
	if(f==r){
		f=-1;
		r=-1;
	}
	
	if(f==-1){
		printf("stack is empty");
	}

	else{
		data=q[f];
		f=f+1;
	}

	printf("data %d is removed in the queue, f=%d, r=%d\n",data,f,r);
}

void main(){
enqueque(10);
enqueque(20);
enqueque(30);
enqueque(40);
enqueque(50);
dequeque();
dequeque();
dequeque();


for(int i=f;i<=r;i++){
printf("%d\n",q[i]);
}

void main(){
enqueue(10);
enqueue(30);
enqueue(40);
enqueue(20);
dequeue();
dequeue();
dequeue();
display();

}
