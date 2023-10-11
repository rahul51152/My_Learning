#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char name[20][10];
	int m[20];
	FILE *fp;
	fp=fopen("int_char.txt","r");
	int n=0;
	while(fscanf(fp,"%s\t%d",name[n],&m[n])!=EOF){
		n++;
	}
	//printf("lenth of array :  %d\n",n);
	for(int i=0;i<n;i++){
		printf("%s\t%d\n",name[i],m[i]);
	}
	fclose(fp);
	return 0;
}


