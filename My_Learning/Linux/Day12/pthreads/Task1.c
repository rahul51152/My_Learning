#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t tid;

void *thread1(void *arg)
{
  sleep(1);
  printf("newly created Thread is executing\n");
  return NULL;
}

int main(void)
{
  int ret = pthread_create(&tid,NULL,thread1,NULL);

  if(ret)
  {
    printf("Thread is not created\n");
  }

  else
  {
    printf("Thread is created\n");
  }

  pthread_join(tid,NULL);
  return 0;
}
