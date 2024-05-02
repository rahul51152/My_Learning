#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

static void hdl(int sig,siginfo_t *siginfo, void *context){
	printf("sending PID: %ld, UID : %ld\n",(long)siginfo->si_pid,(long)siginfo->si_uid);
}

int main(int arg, char *argv[]){
	struct sigaction act;
	memset(&act,'\0',sizeof(act));

	act.sa_sigaction = &hdl;

	act.sa_flags = SA_SIGINFO;

	if(sigaction(SIGTERM,&act,NULL)<0){
		perror("sigaction");
		return 1;
	}
	while(1)
		sleep(3);

	return 0;
}

