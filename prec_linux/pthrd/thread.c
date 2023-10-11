#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<pthread.h>
#include<semaphore.h>
#include <sys/syscall.h>
#include <sys/time.h>
#include <sys/resource.h>
char *buf;
sem_t sem;


void * sender_handler(void * ptr){
	int shmid;
	char *pshm;
	extern pthread_t id1;
	shmid=shmget(111,100,0666|IPC_CREAT);
	pshm=shmat(shmid,(char *)0,0);
	char buf[10];
	sem_wait(&sem);
	for(int i=0;i<5;i++) printf("hello bhai\n");
	printf("Enter the Name :");
	scanf("%s",buf);
	strcpy(pshm,buf);
	shmdt(&shmid);
	sem_post(&sem);
}

void * receiver_handler(void * ptr){
        int shmid;
        char *pshm;
	extern pthread_t id2;
        shmid=shmget(111,100,0666);
        pshm=shmat(shmid,(char *)0,0);
        char buf[10];
	sem_wait(&sem);
	strcpy(buf,pshm);
	printf("hello pratham\n");
        printf("The Name : %s\n",buf);
        shmdt(&shmid);
	sem_post(&sem);
}


int main(){
	pthread_t id1,id2;
	struct sched_param parameter;
	sem_init(&sem,0,1);
	pthread_create(&id1,NULL,sender_handler,NULL);
	parameter.sched_priority = 10;
    	pthread_setschedparam(id1, SCHED_FIFO, &parameter);
	pthread_create(&id2,NULL,receiver_handler,NULL);
	parameter.sched_priority = -10;
    	pthread_setschedparam(id2, SCHED_FIFO, &parameter);
	pthread_join(id2,NULL);
	pthread_join(id1,NULL);
}
