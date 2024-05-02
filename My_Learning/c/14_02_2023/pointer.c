# include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *f1(char *p){
	int i,j;
	for(i=0,j=strlen(p)-1;i<j;i++,j--){
		char temp=p[i];
		p[i]=p[j];
		p[j]=temp;

	}
	return p;
}


void main(){
char a[10];
printf("enter string :");
scanf("%s",a);
printf("%s\n",f1(a));
}
