#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
int main(){
	int id1,id2;
	id1=fork();
	id2=fork();
	if(id2>0){

		printf("parent %d,%d\n",id1,id2);
	}
	else{
		printf("child %d,%d\n",id1,id2);
	}
}
