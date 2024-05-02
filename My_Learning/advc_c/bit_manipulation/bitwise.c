#include<stdio.h>
int main(){
	int a=20;
	int b=10;
	int c = a&b;
	printf("AND opration of a and b : %d\n",c);

	c = a|b;
        printf("OR opration of a and b : %d\n",c);

	c = ~a;
        printf("compeliment  of a : %d\n",c);
	 return 0;
}

