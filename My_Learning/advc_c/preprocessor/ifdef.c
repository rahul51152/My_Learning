#include<stdio.h>

#define JUST_CHECKING  //if we are comment out this line than in for loop of printf statement are not working
#define LIMIT 4

int main(void){
	int i;
	int total = 0;

	for(int i=1;i<=LIMIT;i++){
		total+=2*i*i+1;
#ifdef JUST_CHECKING
		printf("i=%d, running total = %d\n",i,total);
#endif
	}
	printf("granted total = %d\n",total);
	return 0;
}

