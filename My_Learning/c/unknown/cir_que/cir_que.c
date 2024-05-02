#include<stdio.h>
int a[5];
int r=-1;
int f=-1;



void ins_que(int data){
	if(f==0&&r==4 ||r==f-1){
		printf("stack is full\n");
	}
	else{
		if(f==-1){
			f=0;
		}
		if(r==4){
			r=0;
			a[r]=data;
			printf("pushed data =%d at f=%d,r=%d\n",data,f,r);
		}
		else{
			r=r+1;
			a[r]=data;
			printf("pushed data = %d at f=%d,r=%d\n",data,f,r);
		}
	}
}

void del_que(){
	if(f==-1){
		printf("queue is empty\n");
	}
	else{
		if(f==5){
			f=0;
			printf("removed data = %d at f=%d,r=%d\n",a[f],f,r);
		}
		if(f==r){
			f=-1;
			r=-1;
		}

		else{
			printf("removed data = %d at f=%d,r=%d\n",a[f],f,r);
			f=f+1;
		}
	}
			
}

int main(){
	ins_que(10);
	ins_que(20);
	ins_que(30);
	ins_que(40);
	ins_que(50);
	del_que();
	del_que();
	del_que();
	del_que();
	ins_que(10);
}



