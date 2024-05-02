#include<stdio.h>

union mixed{
	char c;
	float f;
	int i;
};

union mixed x;

int main(){
	x.i=100;
	printf("value of integer i: %d\n", x.i);
	printf("value of float f: %f\n", x.f);

	x.f=10.000;
 	printf("value of integer i: %d\n", x.i);
	printf("value of integer f: %f\n", x.f);
	return 0;
}

