#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void ouch(int sig)
{
  printf("OUCH! - I got a signal %d\n",sig);
  //(void) signal(sig,SIG_DFL);
}

int main()
{
  (void) signal(SIGINT,ouch);
  printf("PID of the process = %d\n",getpid());
  while(1)
  {
    printf("hello world\n");
    sleep(1);
  }
}
