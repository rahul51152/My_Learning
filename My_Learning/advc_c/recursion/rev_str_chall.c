#include<stdio.h>
char * rev(char *str){
	static int i =0;
	static char r[100];

	if(*str){
		rev(str+1);
		r[i++]=*str;
	}
	return r;
}

int main(){
	char str[] = "hello bhai";
	printf("%s\n",rev(str));
	return 0;
}
