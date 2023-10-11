#include<stdio.h>
int top1=-1;
int top2=10;
int a[10];

void push1(int data){
	if((top2-top1)>1){
		top1=top1+1;
		a[top1]=data;
	}
	else
		printf("stack is over flow\n");

}
/////////////////////////////////////////////////////////////
void push2(int data){
	if((top2-top1)>1){
			top2=top2-1;
			a[top2]=data;
	}
	else
		printf("stack is over flow\n");
}
///////////////////////////////////////////////

int pop1(int a[]){
	if(top1==-1 ){
		printf("stack is empty\n");
		return;
	}
	top1=top1-1;
	printf("%d is removed from the stack\n",a[top1+1]);
	return a[top1+1];

}
////////////////////////////////////////////////////////
int pop2(int a[]){
if( top2==10){
printf("stack is empty\n");
return;
}
top2=top2+1;
printf("%d is removed from the stack\n",a[top2-1]);
return a[top2-1];
}




void main(){
push1(10);
push2(100);
push1(20);
push2(90);
push1(30);
push2(80);
push1(40);
push2(70);
push1(50);
push2(60);
for(int i=0; i<10;i++){
printf("%d\n",a[i]);
}
pop1(a);
pop1(a);
pop1(a);
pop1(a);
pop2(a);
pop2(a);
pop2(a);
pop2(a);

for(int i=0; i<10;i++){
printf("%d\n",a[i]);
}
}


