#include<stdio.h>
#include<stdlib.h>
int main(void) {
        char a[10]="30.620xyz",*end;
        float value; 
	value = strtod(a,&end);
        printf("value = %f\n", value );
        return 0;
}
