#include<stdio.h>
#include<stdlib.h>
//long int atoi(char const *s);
int main(void) {
        char a[20]="30000000000";
        long value = atol(a); // also use atof() function for float value
	sprintf(a,"%d",45);
        printf("value = %s\n",a);
        return 0;
}
