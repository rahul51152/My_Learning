#include<stdio.h>
#include<string.h>
char p[10];
char *revstr(char *s,char *p){
	int i,j;
	strcpy(p,s);
	for(int i=0,j=strlen(p)-1;i<j;i++,j--){
		char temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
	return p;	
}

void cscd(char *s, char *p){

	while(*s!='\0'){
		s++;
	}
	while(*p!='\0'){
		*s=*p;
		s++;
		p++;
	}
	*s='\0';
}


int main(){
	char name[20];
	char *q;
	printf("Enter the string :");
	scanf("%s",name);
	int n=strlen(name);
	q=revstr(name,p);
	cscd(name,q);
	printf("%s\n",name);
	
	return 0;
}
