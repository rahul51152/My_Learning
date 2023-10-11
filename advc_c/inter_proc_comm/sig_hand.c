#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
void handler_divide(int signum);

int main(){
	int result =0;
	int v1=0, v2=0;
	void (*sighandel)(int);
	sighandel = signal(SIGFPE,handler_divide);
	if(sighandel==SIG_ERR){
		perror("signal error : ");
		return 1;
	}
	v1=121;
	v2=0;
	result = v1/v2;
	printf("result of divide by zero is %d\n", result);
	return 0;
}

void handler_divide(int signum){
	if(signum ==SIGFPE){
		printf("recived SIGFPE , Divide by zero exception\n");
		exit(0);
	}
	else{
		printf("recievid %d signum\n",signum);
	}
	return;
	
}


