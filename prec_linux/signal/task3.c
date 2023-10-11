#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<wait.h>
pid_t pid;
int counter =0;
void  handler1(){
	counter++;
	printf("counter in the handler_1 = %d\n",counter);
	fflush(stdout);
	kill(pid,SIGUSR1);
}

void  handler2(){
        counter+=3;
        printf("counter in hander_2= %d\n",counter);
        exit(0);
}

int main(){
	pid_t p;
	int status;
	signal(SIGUSR1,handler1);
	if((pid=fork())==0){
		signal(SIGUSR1,handler2);
		kill(getppid(),SIGUSR1);
		while(1);
	}
	if((p=wait(&status))>0){
		counter +=4;
		printf("counter in parent process = %d\n",counter);
	}
}
