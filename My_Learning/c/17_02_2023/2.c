#include<stdio.h>
#include<unistd.h>
void main(){
	FILE *fp; //p is a file type pointer
	char ch; //ch is the use to store single character
	fp=fopen("1.c","r");
	ch=getc(fp);
	printf("%c",ch);
	ch=getc(fp);
	printf("%c",ch);
	ch=getc(fp);
	printf(	"%c\n",ch);
	for(int i=0;i<40;i++){
		printf("%c",getc(fp));
	}
	printf("\n");
	fclose(fp);

}


