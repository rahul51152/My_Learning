#include<stdio.h>
int main(){
	register int *x;
//	int *a = &x; // it is not work becuase of the register storage classs is in the cpu 
	int a=19;
	x=&a;
	for(int i=1;i<=15;i++){
		printf("%p\n",x);
	}
	return 0;
}
