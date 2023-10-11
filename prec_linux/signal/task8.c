#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>

void sighandler(int sig){
	printf("signal handler function desplay sig no : %d\n",sig);
}
int main(){
	struct sigaction act;
	act.sa_handler = sighandler;
	act.sa_flags = 0;
	sigemptyset(&act.sa_mask);
	sigaction(SIGINT,&act,0);
	printf("PID=%d\n",getpid());
	while(1){
		printf("hello world\n");
		sleep(1);
	}
}


