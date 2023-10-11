#include<stdio.h>
#include<pthread.h>
#define NTHREAD 10

void *thread_function(void *);
pthread_mutex_t mutex;
int count = 0;

int main(){
	pthread_t thread_id[NTHREAD];
	int i,j;

	for(i=0;i<NTHREAD;i++){
		pthread_create(&thread_id[i],NULL,thread_function,NULL);
	}
	for(j=0;j<NTHREAD;j++){
		pthread_join(thread_id[j],NULL);
	}
	printf("final counter value : %d\n",count);
}

void *thread_function(void *dummyptr){
	printf("thtread no : %ld\n",pthread_self());
	pthread_mutex_lock(&mutex);
	count++;
	pthread_mutex_unlock(&mutex);
}

