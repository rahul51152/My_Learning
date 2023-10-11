#include<stdio.h>
int size=5;
int top=-1;

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

 void main(){
int a[size];
push(a,10);
push(a,20);
push(a,30);
push(a,40);
push(a,50);
pop(a);

}

