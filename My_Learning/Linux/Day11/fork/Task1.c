#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
  int id;
  int cnt = 0;
  printf("I am going to create a new process\n");
  id = fork();
  if(id)
  {
    while(cnt < 10)
    {
      cnt++;
      printf("I am parent, my child process is %d\n",id);
    }
  }
  else
  {
    while(cnt < 20)
    {
	wait(NULL);
      	cnt++;
      	printf("I am child process I got id value as %d\n",id);
    }
  }
}
