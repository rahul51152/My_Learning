#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<signal.h>
void handler(int sig){
	printf("\nhint, rememner thet multiplication is repetitiveaddition!\n");
}
int main(){
	pid_t pid;
	signal(SIGUSR1,handler);
	pid=fork();
	if(pid==0){
		sleep(5);
		kill(getppid(),SIGUSR1);
	}
	else{
		int x;
		printf("what is the result of the 3X5 = ");
		scanf("%d",&x);
		if(x==15){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}
}
