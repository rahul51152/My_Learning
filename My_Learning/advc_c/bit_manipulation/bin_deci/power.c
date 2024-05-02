#include<stdio.h>

int power(int base , int n){
	if(n==0){
		return 1;
	}
        int result = 1;
	for(int i =0; i<n; i++){
		result = result*base;
	}
	return result;
}


