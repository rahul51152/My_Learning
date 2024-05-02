#include<stdio.h>
void fun(int x){
	if(x>0){
		printf("%d\n",x);
		x--;
		fun(x);
	}

}


int main(){
	fun(3);
	return 0;

}
