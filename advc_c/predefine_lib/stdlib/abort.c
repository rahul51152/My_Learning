#include<stdio.h>
#include<stdlib.h>
//file buffers are not flushed
//streams are not closed
//temperory file are not deleted
//function passed to atexit() are not called 

int main(){
	FILE *fp;
	fp =fopen("somefile.txt","r");

	if(fp==NULL){
		printf("going to abort the program\n");
		abort();
	}

	printf("going to close the file\n");
	fclose(fp);
	 return 0;
}

