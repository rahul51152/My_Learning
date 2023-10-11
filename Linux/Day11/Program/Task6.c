#include<stdio.h>

int main()
{
  int ret;
  printf("I am going to exec an Command line args\n");
  ret = execl("/home/bhumika/Desktop/Linux/Day11/Program/Task5","./Task5","linux","kernel","driver","program",0);
  printf("I executed ls program %d\n",ret);
}
