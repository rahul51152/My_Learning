#include<stdio.h>
#include<string.h>

int sum(int max){
	static int s=0;
	if(max==1){
		return 1;
	}
	s=max+sum(max-1);
	return s;
}

int main(){
	printf("%d\n",sum(5));
	return 0;
}
