#include<stdio.h>
#include<stdlib.h>
//int atoi(char const *s);
int main(void) {
	char a[10]="300";
	float value = atoi(a); // also use atof() function for float value

	printf("value = %d\n", value );
	return 0;
}

