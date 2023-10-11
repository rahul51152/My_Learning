#include<stdio.h>
#define FOO BAR
#define BAR (12)
#define MISC(x) (puts("incrementing",(x++)))
#define MAX(a,b) ((a)>(b) ? (a):(b))

int main(){
	printf("%d\n",MAX(10,20));
	return 0;
}
