#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  printf("max fds: %d\n",getdtablesize());
  exit(0);
}
