#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void foo(char **ptr){
	*ptr = malloc(255);
	strcpy(*ptr,"hello world");
}

int main(){
	char *ptr = NULL;
	foo(&ptr); // there are no any memory allocarion 
		  // seg foult
	printf("%s\n",ptr);
	free(ptr);
	return 0;
}

