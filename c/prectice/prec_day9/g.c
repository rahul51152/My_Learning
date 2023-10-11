#include<stdio.h>
int sum(int num){
	int sum=0;
	int rem;
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	return sum;
}
void main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("sum of all digit : %d\n",sum(num));
}
