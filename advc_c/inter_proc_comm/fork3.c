#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#define MAX_COUNT 10

void childprocess(void);
void parentprocess(void);

int main(void){
	pid_t pid;
	pid = fork();
	if(pid==0)
		childprocess();
	else if(pid>0)
		parentprocess();
	else{
		printf("fork() failed\n");
		return 1;
	}

}

void childprocess(void){
	int i;
	for(i=1;i<=MAX_COUNT;i++){
		printf("this lineis from child, value = %d\n",i);
	}
	printf("**** child process is done ****\n");
}

void parentprocess(void){
	int i;
	for(i=1;i<MAX_COUNT;i++){
		printf("this is from parent ,value = %d\n", i);
	}
	printf("** parent is done **\n");
}

