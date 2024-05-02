#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void *pthreadfun(void *arg){
	pthread_detach(pthread_self());
	sleep(1);
	printf("thread fn\n");
	pthread_exit(NULL);
}

int main(int argc,char *argv[]){
	pthread_t pid;
	int ret = pthread_create(&pid,NULL,pthreadfun,NULL);
	if(ret!=0){
		perror("thread creation error\n");
		exit(1);
	}
	printf("after thread createin main\n");
	pthread_exit(NULL);
}

