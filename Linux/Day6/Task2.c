#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd;
  char buf[300];
  int res;

  fd = open("maxfds.txt",O_CREAT|O_RDWR,777);
  //fd1 = open("maxfds.txt",O_WRONLY,664);
  printf("%d\n",fd);

  if(fd<0)
  {
    printf("File is not opened or created\n");
  }
  read(fd,buf,300);
  //res = read(fd1,buf,300);	
  //printf("%d",res);

  printf("data from buffer = %s\n",buf);
  close(fd);

  return 0;
}

