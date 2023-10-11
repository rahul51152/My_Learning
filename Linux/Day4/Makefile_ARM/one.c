#include<stdio.h>
#include"file.h"
//Forcing C pre processor tool to check the file.h in the current directory.

int main()
{
	int a=10,b=5;
	printf("Addition of a and =%d\n",add(a,b));
	printf("Subtraction of and b =%d\n",sub(a,b));
	return 0;
}
