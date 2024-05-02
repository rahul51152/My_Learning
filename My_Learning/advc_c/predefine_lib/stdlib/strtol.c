#include<stdio.h>
#include<stdlib.h>
int main(void) {
        char str[30]="3030304 this is test";
	char *ptr = NULL;
	long ret =0;
	ret= strtol(str,&ptr,10);
        printf("the number (unsighed long integer) is  %ld\n",ret);
	printf("string part is |%s|",ptr);
        return 0;
}
