#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  int ret;
  ret = execl("/usr/bin/vim","vim","Task1.c",0);
  if(ret == -1)
  {
    printf("execl returned error %d\n",ret);
  }
}
