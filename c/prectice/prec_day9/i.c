#include<stdio.h>
int sum(int num){
	int last;
	int rem;
	rem=num%10;
	while(num!=0){
		num=num/10;
		if(num>0 && num<=9){
			last=num;
	}
}
	return last+rem;
}
void main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	printf("sum os first and last digit : %d\n",sum(num));
}
