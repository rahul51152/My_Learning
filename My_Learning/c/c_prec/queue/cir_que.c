#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int r=-1;
int f=-1;
int a[SIZE];


void enque(int data){
	if(r==f-1||f==0&&r==SIZE-1){
		printf("que is full\n");
		return;
	}
	if(f==-1){
		f=0;
	}
	if(r==SIZE-1){
		r=0;
	}
	else{
		r=r+1;
	}
	a[r]=data;
	printf("at r = %d and data is : %d\n",r,a[r]);
}

void ins_frnt(int data){
	if(f==r-1 ||f==0 && r==SIZE-1){
		printf("que if full\n ");
		return;
	}
	if(f==-1){
		f=0;
		r=0;
	}
	if(f==0){
		f=SIZE-1;
	}
	else{
		f=f-1;
	}
	a[f]=data;
	printf("at f= %d, and r = %d data pushed : %d\n",f,r,a[f]);
}


void deque(){
	if(f==-1){
		printf("que is empty\n");
		return;
	}
	if(f==SIZE-1){
		f=0;
	}
	else
		f=f+1;
	printf("at %d and data is poped : %d\n",f,a[f-1]);
}


void del_end(){
	int data;
	if(f==-1){
		printf("queue is enmpty\n");
	}
	if(f==r){
		f=-1;
		r=-1;
	}

	if(r==0){
		r=SIZE-1;
		data=a[0];
	}
	else{
		r=r-1;
		data=a[r+1];
	}
	printf("at f=%d and  r=%d data is : %d\n",f,r,data);
}





void display(){
	for(int i=f;i<r+1;i++){
	printf("data is : %d\n",a[i]);
	}
}


int main(){
	enque(10);
	enque(20);
	enque(30);
	enque(40);
	deque();
	enque(50);
	enque(60);
	del_end();
	display();
	return 0;

}

