#include<stdio.h>
#include<stdlib.h>
int r=-1;
int f=-1;
int a[10];


void enqueue( int data){
if(f==-1){
f=0;
}
if(r==9)
printf("queue is full");
else{
r=r+1;
}
a[r]=data;
printf("%d is add in the queue , f=%d,r=%d\n",a[r],f,r);

}

void dequeue(){
if(f==-1){
printf("queue is empty");
}
else{
f=f+1;
printf("%d is removed in the queue , f=%d,r=%d\n",a[f],f,r);
}

}

display(){

for(int i=f;i<=r;i++){
printf("%d\n",a[i]);
}

}


 void main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
dequeue();
dequeue();
dequeue();
dequeue();
enqueue(25);
display();
}
