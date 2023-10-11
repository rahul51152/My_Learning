#include<stdio.h>
#include<fcntl.h>

int main()
{
  int fd1,fd2,fd3;

  fd2 = open("linux111.txt",O_WRONLY,777);
  /*fd1 = open("linux111.txt",O_WRONLY,777);
  fd3 = open("linux111.txt",O_WRONLY,777);
  fd2 = open("linux111.txt",O_WRONLY,777);*/
  
  printf("fd returned by kernel for linux111.txt =%d\n",fd2);
  /*printf("fd returned by kernel for linux111.txt =%d\n",fd1);
  printf("fd returned by kernel for linux111.txt =%d\n",fd3);
  printf("fd returned by kernel for linux111.txt =%d\n",fd2);*/
  
  close(fd2);
}
