#include<stdio.h>
#include<stdlib.h>

#define DEBUG(fmt, ...) fprintf(stderr,fmt,__VA_ARGS__)

int process(int i,int j){
	int var = 0;
	DEBUG("process(%d,%d)\n",i,j);
	var = i*j;
	DEBUG("return %d\n",var);
}

int main(int argc , char * argv[]){
	int arg1=0,arg2=0;
	if(argc>1)
		arg1 = atoi(argv[1]);
	if(argc == 3)
		arg2 = atoi(argv[2]);
	DEBUG("processed %d argumnets\n",argc-1);
	DEBUG("arg1 = %d, arg2 = %d\n",arg1, arg2);
	printf("%i\n", process(arg1,arg2));

	return 0;
}
