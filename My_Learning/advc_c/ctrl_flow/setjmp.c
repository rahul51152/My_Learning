#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>
jmp_buf buf;
int main(){
	int i= setjmp(buf);
	printf("i =%d\n",i);
	if(i !=0) exit(0);
	longjmp(buf,42);
	printf("Does rthis line get printed\n");
	return 0;
}
