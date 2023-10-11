#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUF 256
int has_ch(char ch, const char * line);

int main(int argc, char * argv[]){
	FILE * fp = NULL;
	char ch = '\0';
	char line[BUF];
	

	if(argc!=3){
		printf("usage : %s charcter filename\n",argv[0]);
		exit(EXIT_FAILURE);
	
	}

	ch = argv[1][0];

	if((fp=fopen(argv[2],"r"))==NULL){
		printf("can't open %s\n",argv[2]);
		exit(EXIT_FAILURE);
	}

	while(fgets(line,BUF,fp)!=NULL){
		if(has_ch(ch,line))
			fputs(line,stdout);
	}
	fclose(fp);
	return 0;
}


int has_ch(char ch, const char * line){
	while( *line ){
		if(ch == *line++){   //if match the character then return the string of the file
			return 1;
		}
	}
	return 0;
}
