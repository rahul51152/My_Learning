#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
void *print_msg(void *ptr);
int main(){
	pthread_t thread1, thread2;

	char *msg1 = "thread 1";
	char *msg2 = "thread 2";

	int iret1, iret2;

	iret1 = pthread_create(&thread1,NULL,print_msg,(void *)msg1);
	iret2 = pthread_create(&thread2,NULL,print_msg,(void *)msg2);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	printf("thread1 returns: %d\n",iret1);
	printf("thread1 returns: %d\n",iret2);
	pthread_exit(NULL);
	exit(0);
}

void *print_msg(void * ptr){
	char * message;
	message = (char *)ptr;
	printf("%s\n",message);
}
