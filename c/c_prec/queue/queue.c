#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int r=-1;
int f=-1;
int a[SIZE];


void enque(int data){
	if(r==SIZE-1){
		printf("que is full\n");
		return;
	}
	if(f==-1){
		f=0;
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
	if(f==r){
		f==-1;
		r==-1;
	}
	else
		f=f+1;
	printf("at %d and data is poped : %d\n",f,a[f-1]);
}


void del_end(){
	if(f==-1){
		printf("queue is enmpty\n");
	}
	if(f==r){
		f=-1;
		r=-1;
	}

	if(r==0){
		r=5;
	}
	else{
		r=r-1;
	}
	printf("at f=%d and  r=%d data is : %d\n",f,r,a[r+1]);
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
	ins_frnt(50);
	del_end();
	display();
	return 0;

}

