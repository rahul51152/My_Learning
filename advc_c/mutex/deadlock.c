#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
pthread_mutex_t lock1,lock2;
void * resource1(){
	pthread_mutex_lock(&lock1);
	printf("job started in resource1\n");
	sleep(2);
	printf("Trying tp get resource2\n");
	pthread_mutex_lock(&lock2);
	printf("Aquired resorce2\n");
	pthread_mutex_unlock(&lock2);
	printf("job finished in the resource1\n");
	pthread_mutex_unlock(&lock1);
	pthread_exit(NULL);
}

void * resource2(){
        pthread_mutex_lock(&lock2);
        printf("job started in resource2\n");
        sleep(2);
        printf("Trying tp get resource1\n");
        pthread_mutex_lock(&lock1);
        printf("Aquired resorce1\n");
        pthread_mutex_unlock(&lock1);
        printf("job finished in the resource2\n");
        pthread_mutex_unlock(&lock2);
        pthread_exit(NULL);
}

int main(){
	pthread_mutex_init(&lock1,NULL);
	pthread_mutex_init(&lock2,NULL);

	pthread_t t1,t2;

	pthread_create(&t1,NULL,resource1,NULL);
	pthread_create(&t2,NULL,resource2,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	return 0;
}
