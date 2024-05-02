#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int sharedVar=0;  //our shared variable

pthread_mutex_t my_mutex;  //create Mutex
int i;

void *thread_inc1(void *arg)
{
  pthread_mutex_lock(&my_mutex);   //take mutex
  for(i=0;i<100000;i++)
  {
    sharedVar++;                   //critical Section
  }
  pthread_mutex_unlock(&my_mutex); //release mutex
}

void *thread_inc2(void *arg)
{
  pthread_mutex_lock(&my_mutex);   //take mutex
  for(i=0;i<100000;i++)
  {
   sharedVar++;                    //critical Section
  }
  pthread_mutex_unlock(&my_mutex); //release mutex
}

int main()
{
  pthread_t thread1,thread2;

  pthread_mutex_init(&my_mutex,NULL);  //initialize mutex

  pthread_create(&thread1,NULL,thread_inc1,NULL);
  pthread_create(&thread2,NULL,thread_inc2,NULL);

  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);

  printf("sharedVar = %d\n",sharedVar);
  return 0;
}
