#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
int main(){
	printf("testing SIGSTOP\n");
	raise(SIGSTOP);
	printf("terminate\n");
	return 0;
}
