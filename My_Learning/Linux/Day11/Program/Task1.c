#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
  int ret;
  int r = getpid();
  printf("%d\n",r); 
  printf("I am going to exec an 'ls' program\n");
  ret = execl("/bin/ls","ls","-l",0);
  
  printf("i executed ls program %d\n",ret);
  printf("i executed ls program %d\n",ret);
  printf("i executed ls program %d\n",ret);
  return 0;
}
