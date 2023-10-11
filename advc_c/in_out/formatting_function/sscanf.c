#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char *str = "jason instructor 43";
	char name[10],title[10];
	int age =0,ret=0;
	ret = sscanf(str,"%s %s %d",name,title,&age);
	printf("name : %s\n",name);
	printf("title : %s\n",title);
	printf("age : %d",age);
	return 0;
}
