#include<stdio.h>
#include "head.h"
int main(){
	int n1,n2;
	printf("Enter an integer :");
	scanf("%d",&n1);
	printf("Enter another integer :");
	scanf("%d",&n2);
	printf("complement of n1 in decimal : %d and in binary : %d\n",~n1,dec_bin(~n1));
	printf("complement of n2 : %d and in binary : %d\n",~n2,dec_bin(~n2));
	printf("(~n1) & (~n2) = %d and  in binary : %d\n",(~n1) & (~n2),dec_bin((~n1) & (~n2)));
	printf("(~n1) | (~n2) = %d and binary : %d\n",(~n1) | (~n2),dec_bin((~n1) | (~n2)));
	printf("(~n1) ^ (~n2) = %d and binary : %d\n",(~n1) ^ (~n2),dec_bin((~n1)^(~n2)));
	printf("n1<<2 = %d and binary : %d\n",n1<<2,dec_bin(n1<<2));
	return 0;
}
