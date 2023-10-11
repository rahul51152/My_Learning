#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE * fp;
	char ch[100];
	if((fp= fopen("open.txt","r+"))==NULL){
		printf("CANNOT OPEN THE FILE\n");
		exit(1);
	}
	for(int i=0;i<10;i++){
		fprintf(fp,"the count number is %d\n",i+1);
	}
	fclose(fp);
	return 0;
}

