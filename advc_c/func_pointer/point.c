#include<stdio.h>
#include<stdlib.h>

void foo(int **ptr){
	int a=5;
	*ptr = &a;
}

int main(){
	int *ptr=NULL;
	ptr = (int*)malloc(sizeof(int));
	*ptr=10;
	foo(&ptr);
	printf("%d\n",*ptr);
	return 0;
}

