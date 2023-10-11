#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
  int pid_1;

  printf("current process pid = %d\n",getpid());

  pid_1 = vfork();

  printf("%d\n",pid_1);

  if(pid_1==0)
  {
    //sleep(5);
    printf("new child process pid = %d\n",getpid());
    printf("new child parent process ppid = %d\n",getppid());
  }

  else
  {
    //sleep(3);
    printf("parent process pid = %d\n",getpid());
    printf("parents parent process ppid = %d\n",getppid());   //bash
  }
  //while(1);
  exit(0);
}
