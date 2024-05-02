#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *buf=NULL;
	size_t bufsize= 32;
	size_t ch;
	buf = (char *)malloc(bufsize* sizeof(char));
	if(buf==NULL){
		exit(1);
	}
	printf("Type something :");
	ch = getline(&buf,&bufsize,stdin);
	printf("%zu character were read.\n",ch);
	printf("you type ; %s\n",buf);
	return 0;
}

