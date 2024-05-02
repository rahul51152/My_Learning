#include<stdio.h>
#include<pthread.h>

int pthread_cancel(pthread_t thread);

void *myfun(void *ptr){
	printf("hello world");
	pthread_cancel(pthread_self());
	return NULL;
}
int main(){
	pthread_t thread;
	pthread_create(&thread, NULL,myfun,NULL);
	pthread_join(thread,NULL);
	return 0;
}
