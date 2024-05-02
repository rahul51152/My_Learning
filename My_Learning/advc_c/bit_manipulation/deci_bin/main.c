#include<stdio.h>
#include"head.h"
int main(){
	int n;
	printf("Enter the decimal value : ");
	scanf("%d",&n);
	printf("binary number : %lld\n",dec_bin(n));
	return 0;
}
