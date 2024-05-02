#include<stdio.h>
#include<stdlib.h>
void sign_off(void);
void too_bad(void);
int main(void){
	int n;
	atexit(sign_off);
	puts("enter an integer");
	if(scanf("%d",&n)!=1){
		puts("that's mo integer  !");
		atexit(too_bad);
		exit(EXIT_FAILURE);
	}
	return 0;
}

void sign_off(void){
	puts("in sign_off....\n");
}

void too_bad(void){
        puts("in too_bad....\n");
}

