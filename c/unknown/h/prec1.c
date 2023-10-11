#include<stdio.h>
#include<stdlib.h>
int top1=-1;
int top2=10;
int a[10];


push1(int a[],int data){
	if(top2-top1==1)
		printf("stack is full");
	else{
		top1=top1+1;
		a[top1]=data;
		printf("push data : %d , top1=%d ,top2=%d\n",a[top1],top1,top2);
		}

}


push2(int a[],int data){
	if(top2-top1==1)
		printf("stack is full");
	else{
		top2=top2-1;
		a[top2]=data;
		printf("push data : %d , top1=%d ,top2=%d\n",a[top2],top1,top2);
		}

}

display(){
for(int i=0;i<10;i++){
printf("%d\n",a[i]);
}
}


void main(){
push1(a,10);
push2(a,100);
push1(a,20);
push2(a,90);
//push1(a,30);
//push2(a,80);
push1(a,40);
push2(a,70);
push1(a,50);
push2(a,60);
display();
}

