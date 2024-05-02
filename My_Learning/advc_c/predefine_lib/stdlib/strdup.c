#include<stdio.h>
#include<stdlib.h>
int main(){
	char *p1 = "jason";
	char *p2 = NULL;

	p2 =strdup(p1);
	printf("Duplicate string is %s\n",p2);
	return 0;
}
