#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd,len;
  char write_buf[50]="hi, how are you1?, wow?";
  char read_buf[50];

  fd = open("linux_kernel.txt",O_CREAT|O_RDWR,777);

  len = write(fd,write_buf,50);

  printf("return value from write optn =%d\n",len);

 // int l = lseek(fd,10,SEEK_SET);
 // int l = lseek(fd,10,SEEK_CUR);
  //int l = lseek(fd,-30,SEEK_CUR);
 int l = lseek(fd,20,SEEK_END);
  printf("%d\n",l);

  read(fd,read_buf,len);

  printf("data from buffer(read optn) =%s\n",read_buf);

  close(fd);

  return 0;
}
