#include<stdio.h>

int somedisplay();

int main(){
	int (*fun_ptr)();
	fun_ptr = somedisplay;
	printf("\n address of function is %p\n",fun_ptr);
	(*fun_ptr)();
	return 0;
}

int somedisplay(){
	printf("__display some text__\n");
	return 0;
}
