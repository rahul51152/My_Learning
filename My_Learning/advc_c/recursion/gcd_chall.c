#include<stdio.h>

int gcd(int a, int b){
	while(a!=b){
		if(a>b)
			return gcd(a-b,b);
		else
			return gcd(a,b-a);
	}
	return a;
}

int main(){
	printf("gcd : %d\n",gcd(3,6));
	return 0;
}
