#include<stdio.h>
#include<string.h>
#include<sys/shm.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<unistd.h>
int main(){
	char *ptr;
	int shmid,pid;
	shmid = shmget((key_t)1,20,IPC_CREAT|0666);
	//ptr = (char*)shmat(shmid,(char*)0,0);
	pid=fork();
	if(pid==0){
		ptr = shmat(shmid,(char*)0,0);
		strcpy(ptr,"shared memory\n");
		int n =shmdt(ptr);
		printf("%d\n",n);
		
	}
	else{
		wait(0);
		ptr = shmat(shmid,(char*)0,0);
		printf("parent reads...%c\n",*(ptr+2));
		printf("parent reads %s\n",ptr);
		shmdt(ptr);
		shmctl(shmid,IPC_RMID,NULL);
	}
}

