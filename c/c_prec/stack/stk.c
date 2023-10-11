#include<stdio.h>
#include<stdlib.h>
#define SIZE 10 
int top=-1;
int a[SIZE];

void push(int data){
	if(top==SIZE-1){
		printf("stack is full\n");
		return ;
	}
	top=top+1;
	a[top]=data;
	printf("at %d push in data : %d\n",top,a[top]);
}

int pop(){
	if(top==-1){
		printf("stack is null\n");
		return ;
	}
	top=top-1;
	return a[top+1];
}

void display(){
	for(int i=0;i<top+1;i++){
		printf("%d\n",a[i]);
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	printf("pop out data is %d\n",pop());
	display();
	return 0;
}

