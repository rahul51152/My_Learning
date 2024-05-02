#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>
jmp_buf buf;

void myfunction(){
        printf("in function()\n");
        longjmp(buf,1);
	printf("you will nevwr see this because i longjmp\n");
}

int main(){
        if(setjmp(buf))
		printf("back in the main\n");
	else{
        printf("first time through\n");
	myfunction();
	}
        return 0;
}
