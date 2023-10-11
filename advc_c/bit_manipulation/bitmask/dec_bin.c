#include<stdio.h>
long long int dec_bin(int n){ // take 20
	int r=0,i=1;
	long long int bin = 0;
	while(n!=0){
		r=n%2; // r = 0; r = 0; r = 1;r = 0;r = 1;
		n=n/2; // n = 10; n = 5; n = 2; n = 1;n=0;---> exit from loop
		bin =bin+ r *i; // bin=0;bin=0; bin = 100;bin = 10100;
		i =i*10;   //i=10; i=100;i=1000; i = 10000;i = 100000;
	}
	return bin;
}

