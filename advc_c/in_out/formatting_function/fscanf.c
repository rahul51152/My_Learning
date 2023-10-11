#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char buf[255];
	fp = fopen ("open.txt","r");
	while(fscanf(fp,"%s",buf)!=EOF){
		printf("%s",buf);
	}
	fclose(fp);
	return 0;
}
	
