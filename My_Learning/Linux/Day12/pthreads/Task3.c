#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<pthread.h>

void *th_fn(void *p);

int fd;
int main()
{
  pthread_t t1,t2;

  fd = open("/etc/passwd",O_RDONLY);
  printf("File Opened with fd: %d\n",fd);
  pthread_create(&t1,NULL,th_fn,"Thread One");
  pthread_create(&t2,NULL,th_fn,"Thread Two");
  pthread_join(t1,NULL);
  pthread_join(t2,NULL);
}

void *th_fn(void *p)
{
  char *str,buff[100];
  int n,pid;
  str = (char *)p;
  pid = getpid();
  printf("%s: \t Started Now: \t For Process %d \n\n",str,pid);
  do
  {
    n = read(fd,buff,100);
    printf("%s: \t Read: \t %d \n\n",str,pid);
    printf("\n-----------------\n");

    write(1,buff,n);

    printf("\n-----------------\n");
    sleep(3);
  }while(n);
  printf("%s: \t Finished: \t For Process %d \n\n",str,pid);
}
