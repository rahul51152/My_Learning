#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
pthread_attr_t attr;
void *dowork(void *threadid){
	long tid;
	size_t mystacksize;

	tid = (long)threadid;
	pthread_attr_getstacksize(&attr,&mystacksize);
	printf("thread %ld : stack size = %li btyes\n",tid,mystacksize);
	pthread_exit(NULL);
}

int main(int argc , char *argv[]){
	pthread_t  mythread;
	size_t stacksize;
	pthread_t myid;
	long t;

	pthread_attr_init(&attr);
	pthread_attr_getstacksize(&attr,&stacksize);
	printf("Default stack size = %li\n", stacksize);
	stacksize = 9000000;
	printf("amount of stack needed per thread = %li\n",stacksize);
	pthread_attr_setstacksize(&attr,stacksize);
	printf("creating thread with stack size = %li bytes\n",stacksize);

	myid = pthread_create(&mythread,&attr,dowork,(void *)t);
	
	if(myid){
		printf("Error : return code from ptheread create () is %ld\n",myid);
		exit(-1);
	}
	pthread_exit(NULL);
	return 0;
}

