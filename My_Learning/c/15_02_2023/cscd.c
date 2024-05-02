#include<stdio.h>

char *mystrcpy(char *s1,char *s2){
	while(*s1!='\0'){
	s1++;
	}
	while(*s2!='\0'){
	*s1=*s2;
	s2++;
	s1++;

	}
	*s1='\0';
	return s1;
	}



void main(){
	char a[10] = "rahul";
	char b[15] = "chauhan";
	mystrcpy(b,a);
	printf("%s\n",b);
}

