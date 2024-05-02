#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<signal.h>

void one_handler(int sig){
	printf("this is handler for signal no one\n");
}

void nine_handler(int sig){
	printf("i am now handling signal no : %d\n",sig);
}

int main(){
	pid_t pid;
	int n;
	signal(SIGHUP,one_handler);
	signal(SIGKILL,nine_handler);
	getchar();
	pid=fork();
	if(pid==0){
		while(1)
		{
			sleep(1);
			printf("I am happy now, i will do same work forever\n");
		}
	}
	else{
		printf("For kill :-> 9\nFor notification :-> 1\nEnter the number for signal : ");
		scanf("%d",&n);
		if(n==9){
		kill(pid,SIGKILL);
		printf("nine_handler is running\n");
		}
		if(n==1){
                kill(pid,SIGHUP);
                printf("one_handler is running\n");
                }
	}
}
