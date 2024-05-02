#include<stdio.h>
#include<string.h>
#include<sys/shm.h>

int main()
{
  char *ptr;
  int shmid,pid;

  shmid = shmget((key_t)1,20,IPC_CREAT|0666);

  ptr = (char*)shmat(shmid,(char*)0,0);  //arg2 is address arg i.e 0 because leaving to the kernel to attach at free address space in the process. 

  pid = fork();
  if(pid == 0)
  {
    strcpy(ptr,"Shared Memory\n");
  }
  else
  {
    wait(0);
    printf("parent reads ...%c\n",*(ptr+2));
    printf("parent reads %s\n",ptr);
  }
}
