#include<stdio.h>
#include<stdlib.h>
int main()
{
  int pid,stat;

  pid = fork();

  if(pid == 0)
  {
    printf("\nCHILD PROCESS\n");
    printf("Child pid = %d\n",getpid());
    exit(0);
  }
  pid = wait(&stat);
  printf("Child pid = %d\n",pid);
  printf("Parent pid = %d\n",getpid());
  printf("%d\n",WEXITSTATUS(stat));
}
