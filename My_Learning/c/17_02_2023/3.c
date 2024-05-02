#include<stdio.h>
void main(){
	FILE *fp; //p is a file type pointer
	char ch; //ch is the use to store single character
	fp=fopen("1.c","r");
	while(1){
		ch = getc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
}

