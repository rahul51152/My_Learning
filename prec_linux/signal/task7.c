#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<aio.h>

void sighand(int n){
	printf("i am in sighandler with sig_num = %d\n",n);
}

int main(){
	sigset_t s_set;
	signal(1,sighand);
	sigemptyset(&s_set);
	sigaddset(&s_set,1);
	perror("sig1");
	sigaddset(&s_set,4);
	perror("sig4");
	sigprocmask(SIG_BLOCK,&s_set,NULL);
	perror("sigmask");
	printf("PID of the process = %d\n",getpid());
	printf("send me signal one and see the effect now\n");
	getchar();
	getchar();
	sigprocmask(SIG_UNBLOCK,&s_set,NULL);
	printf("now signal are unblocked\n");
	while(1);
}
