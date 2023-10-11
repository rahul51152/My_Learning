#include<stdio.h>
#include<stdlib.h>
int main(){
        char p1[] = "jason";
	// 5 byte of the p1 are copyied to a new memory
	//allocate dytnamically and pointer to copied
	//memory is returnd;
        char * target =strndup(p1,5);
        printf("Duplicate string is %s\n",target);
        return 0;
}
