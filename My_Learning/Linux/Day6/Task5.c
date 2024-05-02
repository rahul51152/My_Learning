#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#define BUF_SIZE 1024

int main()
{
  int inputFd,outputFd,openFlags;
  mode_t filePerms;
  ssize_t numRead;
  char buf[BUF_SIZE];

  inputFd = open("fileA.txt",O_RDONLY);
  if(inputFd == -1)
  {
    printf("Open Error\n");
    return 0;
  }

  outputFd = open("fileB.txt",O_RDWR,777);
  if(outputFd == -1)
  {
    printf("Opening file\n");
    return 0;
  } 

  while((numRead = read(inputFd,buf,BUF_SIZE))>0)
  {
    if(write(outputFd,buf,numRead) != numRead)
    {
      printf("Write Error\n");
      return 0;
    }
    printf("%d\n",numRead);
  }
  if(numRead == -1)
  {
    printf("Read Error\n");
    return 0 ;
  }
  if(close(inputFd) == -1)
  {
    printf("Close input\n");
    return 0;
  }
  if(close(outputFd) == -1)
  {
    printf("Close output\n");
    return 0 ;
  }
}
