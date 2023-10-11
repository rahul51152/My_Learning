#include<stdio.h>
#include"head.h"
int main(){
	int flag =12;
	int mask =8;
	printf("flag : %d in binary %d\n",flag,dec_bin(flag));
	printf("mask : %d in binary %d\n",mask, dec_bin(mask));
	printf("mask _or : %d in binary :%d\n", flag | mask,dec_bin(flag | mask));
	printf("mask _and : %d in binary :%d\n", flag & mask,dec_bin(flag & mask));
	printf("mask _xor: %d in binary :%d\n", flag ^ mask,dec_bin(flag ^ mask));
	return 0;
}

