#include<stdio.h>
int main(){
	int a[]; // it is not working beacause there not use for dynemic memory allocation.
	int a[5];
	a[1]=2;
	a[0]=20;
	printf("%d\n",a[1]);
	printf("%d\n",a[0]);
	return 0;
}
