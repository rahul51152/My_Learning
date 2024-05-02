#include<stdio.h>
static int fun(){
	static int count =5;
	int var =0;
	printf("automatic = %d\t static = %d\n",var,count);
	count++;
	var++;
	return count;
}
int main(){
	for(int i=0;i<5;i++){
		fun();
	}
	return 0;
}	

