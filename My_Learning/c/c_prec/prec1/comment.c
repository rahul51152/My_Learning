#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	char buf[100];
	char cp[100];
	fp=fopen("strstr.c","r");
	while(fgets(buf,sizeof(buf),fp)>0){
		for(int i=0 i<strlen(buf),i++){
			if(buf[i]=='\' && buf[i+1]=='\'){
				buf[i]="\0";
			}
			else()
	}
	fclose(fp);
}
				


