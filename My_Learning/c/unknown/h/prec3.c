#include<stdio.h>
#include<stdlib.h>
int r=-1;
int f=-1;
int a[6];



int isque(){
 if(r==f-1 || f==0&&r==5){
printf("queue is full\n");
return 1;
}
else
return 0;
}



int encir(int data){

if(isque()){
;
}

if(f==-1){
f=0;
}

if(r==5){
r=0;
}

else{
r=r+1;
}
a[r]=data;
printf("%d is add in the cir_queue , f=%d ,r=%d\n",a[r],f,r);

}

void decir(){
int data;
if(f==-1){
printf("queue is empty");
}

if(f==r){
f=-1;
r=-1;
}

if(f==5){
f=0;
}

else{
f=f+1;
}
data=a[f];
printf("%d is add in the cir_queue , f=%d ,r=%d\n",a[f],f,r);
}

void main(){
encir(10);
encir(20);
decir();


}
