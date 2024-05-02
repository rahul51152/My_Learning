#include<stdio.h>
#include<assert.h>

int main(void){
	int y=5;

	for(int i=0;i<20;i++){
		printf("x=%d y=%d\n",i,y);
		assert(i<y);
	}
	return 0;
}
