#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	alarm(5);
	for(int i=0;i<10;i++){
		printf("terminate\n");
		sleep(1);
	}
        return 0;
}
