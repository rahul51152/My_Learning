#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
int n=0 ;
void handle_sigint(){
	printf("i am signal\n");
	printf("Enter the number : ");
	scanf("%d",&n);
}

int main(){
	signal(SIGINT,handle_sigint);
	while(1){
		printf("value :%d\n",n);
		sleep(1);
	}
	return 0;
}
