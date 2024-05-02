#include<stdio.h>
#include<fcntl.h>

  // int   creat("const char *pathname",mode_tmodes);

int main()
{
  int fd1,fd2,fd3;

  fd1 = creat("linux100.txt",777); //3

  fd2 = creat("linux200.txt",777); //4

  fd3 = creat("linux300.txt",777); //5

  printf("fd for Linux100.txt=%d\n",fd1);
  printf("fd for Linux200.txt=%d\n",fd2);
  printf("fd for Linux300.txt=%d\n",fd3);

  close(fd1);
  close(fd2);
  close(fd3);

  return 0;
}
