#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd1,fd2,fd3,fd4;
  char buf[200];

  fd1 = open("linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
  fd2 = open("linuxnew.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
  printf("fd1=%d\n",fd1);
  printf("fd2=%d\n",fd2);

  fd3 = dup2(fd1,8);

  printf("fd3 is our defined dup of FP1=%d\n",fd3);

  close(fd1);
  close(fd2); 
  close(fd3); 
}

