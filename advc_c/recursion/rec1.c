#include<stdio.h>
#include<string.h>
int fact(int n){
	int fac=0;
       	if(n==0){
      		return 1;
	}
	fac=n*fact(n-1);

	return fac;
}


int main(){
	int j=0;
	for(j=0;j<8;++j){
		printf("!%d=%d\n",j,fact(j));
	}
	return 0;
}
