#include<stdio.h>
int sum(int arg){
	static int  sum=0;
	sum = sum+arg;
	return sum;
}
int main(){
	printf("%d\t",sum(25));
	printf("%d\t",sum(15));
	printf("%d\t",sum(30));
	return 0;
}

