#include<stdio.h>
int size=10;
int top1=-1;
int top2;


void push(int a[],int data){
	if(top==size-1){
		printf("stack is full\n");
		return;
	}
	top=top+1;
	a[top]=data;
	printf("%d is pushed in the stack\n",a[top]);
}


int pop(int a[]){
	if(top==-1){
		printf("stack is empty\n");
	return;
	}
	top=top-1;
		printf("%d is removed from the stack\n",a[top+1]);
	return a[top+1];
}

void del_data(int a[],int data){
	if(a[top]==data){
		int x=pop(a);
		return;
	}
	int x=pop(a);
	del_mid(a,data);
	push(a,x);
}






void main()
{ int s=10;
   int a[size];
 push(a,10);
 push(a,20);
 push(a,30);
 push(a,40);
 push(a,50);
 push(a,60);
 push(a,70);
 push(a,80);
del_data(a,50);
printf("---------------------------------------------------\n");
for(int i=0;i<=top;i++)
printf("%d\n",a[i]);
}

