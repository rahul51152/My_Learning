#include<stdio.h>
#include<string.h>
void up_and_down(int n){
	printf("level %d : n location %p\n",n,&n);

	if(n<4)
		up_and_down(n+1);

	printf("level %d : n location %p\n",n,&n);
}

int main(){
	up_and_down(1);
	return 0;
}
