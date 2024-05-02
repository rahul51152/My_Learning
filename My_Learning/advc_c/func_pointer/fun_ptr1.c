#include<stdio.h>
#include<string.h>

void fun1(int);
void fun2(int);

typedef void funtype(int);


int main(){
	funtype * fun_ptr= NULL;
	fun_ptr = fun1;
	(*fun_ptr)(100);

	fun_ptr = fun2;
	(*fun_ptr)(300);

	return 0;
}

void fun1(int n){
	printf("fun1 got an argument of %d\n",n);
}


void fun2(int n){
        printf("fun2 got an argument of %d\n",n);
}
