#include<stdio.h>
#include"file.h"
#include"add.c"
#include"sub.c"
int main()
{
	int a=10,b=5;
	printf("Addition of a and=%d\n",add(a,b));
	printf("Subtraction of and b=%d\n",sub(a,b));
	return 0;
}
