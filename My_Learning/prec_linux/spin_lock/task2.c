
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
static pthread_spinlock_t slock;
int i=1;
void *spinlock1(void* i){
        int rc;
        int count=0;
        printf("thread_1 try to get spin_lock\n");
        rc = pthread_spin_lock(&slock);
	i++;
        printf("inside thread_1\n");
	printf("value of i is : %d\n",i);
        rc =pthread_spin_unlock(&slock);
        printf("thread_1 completed\n");
        return NULL;
}


void *spinlock2(void* i){
        int rc;
        int count=0;
        printf("thread_2 try to get spin_lock\n");
        rc = pthread_spin_lock(&slock);
	i++;
        printf("inside thread2\n");
	printf("value of is i :%d\n",i);
        rc =pthread_spin_unlock(&slock);
        printf("thread_2 completed\n");
        return NULL;
}

int main(){

        int rc=0;
        pthread_t thread1,thread2;
        pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE);
        rc=pthread_create(&thread1,NULL,spinlock1,(int*)i);
	rc=pthread_create(&thread2,NULL,spinlock2,(int*)i);
        rc = pthread_join(thread1,NULL);
	rc = pthread_join(thread2,NULL);
        rc = pthread_spin_destroy(&slock);
        printf("main complate");
        return 0;
}

