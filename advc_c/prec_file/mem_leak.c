#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void prob1(){
	char *b;
	b = (char*)malloc(10);
	free(b);
	//free(b);
}

//memory leak
void prob2(){
	char *b;
	for(int i=0;i<10;i++){
		b=(char*)malloc(10);
	}
	free(b);
}


//trying to use null pointer 
void problem5(){
	char *b;
	b=NULL;
	b[0]=1;
	printf("value : %c\n",b[0]);
}

int main(){
	problem5();
	return 0;
}


