#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

void * hello_return(void *args){
	char * hello = strdup("hello world!\n");
	return (void *)hello;
}

int main(int argc ,char *ragv[]){
	char *str;
	pthread_t thread;

	pthread_create(&thread,NULL,hello_return,NULL);
	pthread_join(thread,(void **)&str);

	//pthread_exit(NULL);
	printf("%s",str);
	return 0;
}

