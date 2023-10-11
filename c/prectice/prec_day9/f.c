#include<stdio.h>
void swap(int x, int y){
	int temp;
	temp=x;
	x=y;
	printf("first no : %d\n",x);
	y=temp;
	printf("second no :%d\n",y);
}

void main(){
	int c,d;
	printf("variable c value :");
	scanf("%d",&c);
	printf("variable d value :");
	scanf("%d",&d);
	swap(c,d);
}
	
	
