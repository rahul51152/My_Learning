#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<wait.h>
int val =10;
void handler(){
        val+=5;
	printf("value in handler : %d\n",val);
}

int main(){
	pid_t pid;
        signal(SIGCHLD,handler);
	pid=fork();
        if(pid==0){
                val-=3;
		printf("value in child : %d\n",val);
		//exit(0);
        }
	else{
		waitpid(pid,NULL,0);
		printf("value in parent=%d\n",val);
		//exit(0);
	}
	printf("value:%d\n",val);
        return 0;
}
