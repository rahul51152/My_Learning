#include<stdio.h>
int r=-1;
int f=-1;
int q[6];

int isque(){
 	if(r==f-1 ||f==0&&r==5){
		printf("queue is full\n");
		return 1;
	}
	else
	return 0;
}


int encir_que(int data){
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
		q[r]=data;
		printf("data %d is inserted in the queue, f=%d, r=%d\n",q[r],f,r);
}


int insert_front(int data){
if(r==5&&f==0||r==f-1){
printf("queue is full\n");
}
else{
	if(f==-1)
	{
		f=0;
		r=0;
	}
	else{ 
		if(f==0){
		f=5;
		}
		else{
		f=f-1;
		}
	}
}
q[f]=data;
printf("data %d is inserted in the queue, f=%d, r=%d\n",q[f],f,r);
}


void delete_que(){
	int data=q[f];
	if(f==-1){
		printf("queue is empty");
	}
	else{
		int data =q[r];
		if(f==r){
			f=-1;
			r=-1;
		}
		else{
			if(r==0){
				r=5;
			}
			else{
				r=r-1;
			}
		}
	}

printf("data %d is removed in the queue, f=%d, r=%d\n",data,f,r);
}

void dequeque(){
int data;
	if(f==-1){
		printf("queue is empty\n");
	}
	if(f==5){
		f=0;
	}
	else{
		data=q[f];
		f=f+1;
	}

printf("data %d is removed in the queue, f=%d, r=%d\n",data,f,r);
}


void display(){
if(f<=r){
for(int i=f;i<=r;i++){
printf("%d",q[i]);
}
}
else{
for(int i=0;i<=r;i++)
printf("%d",q[i]);
for(int i=f;i<6;i++)
printf("%d",q[i]);
}
printf("\n");
}

void main(){
encir_que(10);
encir_que(20);
encir_que(30);
encir_que(40);
encir_que(50);
encir_que(50);
dequeque();
encir_que(70);
display();
}
