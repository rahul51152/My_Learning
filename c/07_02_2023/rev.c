#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the string : ");
	scanf("%d",&n);
	int sum=0;
	while(n>0){
		sum=sum*10+n%10;
		n=n/10;
	}
	printf("\n");
	printf("%d",sum);
}
