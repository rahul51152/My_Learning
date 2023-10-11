#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fp = NULL;
	fp = fopen("somefile.txt","w");
	if(fp==NULL){
		exit(1);
	}
	fputs("hello there , i hope this article will helps\n",fp);
	return 0;
}

