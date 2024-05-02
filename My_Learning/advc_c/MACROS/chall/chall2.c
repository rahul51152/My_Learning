#include<stdio.h>
#define SUM(x,y) (x+y)

int main(){
	int num1=0;
	int num2=0;
	printf("Enter any two number :");
	scanf("%d %d",&num1,&num2);

	printf("sum (%d,%d) = %d\n",num1, num2,SUM(num1,num2));
	return 0;
}


