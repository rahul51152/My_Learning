#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *r;

void revstr(char *a){
	char *p;
	p=a;
	while(*p!='\0'){
	printf("%c",*p);	
	p++;
	}printf("\n");
	while(p!=a){
	r=malloc(4*sizeof(char));
	*r=*p;

	r++;
	p--;
	}
         *r=*p;
	printf("%s",r);
	printf("\n");
}



void main(){
	char a[50];
	int n=strlen(a);
	printf("entert string :");
	scanf("%s",a);

	revstr(a);

}
