#include<stdio.h>

int main()
{
  printf("I am going an ls process in current process\n");
  execlp("ls","ls",0);
  printf("I exceed 'ls' process\n");
}
