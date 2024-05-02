#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
static pthread_spinlock_t slock;
void *spinlock(void* i){
	int rc;
	int count=0;
	printf("Entyer the thread %d getting spin lock\n",(int*)i);
	rc = pthread_spin_lock(&slock);
	printf("%d thread unlock the spin lock\n",(int *)i);
	rc =pthread_spin_unlock(&slock);
	printf("thread completed\n");
	return NULL;
}


int main(){
	
	int rc=0;
	pthread_t thread1;
	pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE);
	printf("main, get spin_lock\n");
	rc=pthread_spin_lock(&slock);
	printf("main,create the spin_lock thread\n");
	rc=pthread_create(&thread1,NULL,spinlock,(int *)1);
	printf("main,wait for bit holding the spinlock\n");
	sleep(5);
	printf("main,now unlock the spin_lock\n");
	rc=pthread_spin_unlock(&slock);
	
	if(rc ==0){
		printf("main thread successfully unlocked\n");
	}
	else{
		printf("main thread unsuccesfully unlocked\n");
	}

	printf("main wait for the  thread to end\n");
	rc = pthread_join(thread1,NULL);
	rc = pthread_spin_destroy(&slock);
	printf("main complate");
	return 0;
}


