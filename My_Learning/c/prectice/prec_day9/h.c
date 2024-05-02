#include<stdio.h>
int sum(int num){
	int sum=0;
	int rem;
	while(num!=0){
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	return sum;
}
void main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("revers no : %d\n",sum(num));
}
