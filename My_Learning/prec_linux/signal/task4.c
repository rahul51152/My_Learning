#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<signal.h>
#include<wait.h>
int count =0;
void handler(){
	count++;
	printf("counter value in the handler : %d\n", count);
}

int main(){
	pid_t pid;
	signal(SIGUSR1,handler);
	pid=fork();
	if(pid==0){
		while(1){
		printf("hello bhai\n");
		}
		kill(getpid(),SIGUSR1);
	}
	else{
		sleep(1);
		kill(pid,SIGKILL);
		int n;
		printf("enter the value for the num : ");
		scanf("%d",&n);
		printf("value of the number  : %d\n",n*3);

		printf("completed\n");
		wait(NULL);
	}
	return 0;

}
