#include<stdio.h>
#include<fcntl.h>

int main()
{
  int fd,fd1;
  fd = open("fileX.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
  fd = open("fileX.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
  printf("return value of fd = %d\n",fd);
  
  
  while(1);
  close(fd);

  return 0;
}	
