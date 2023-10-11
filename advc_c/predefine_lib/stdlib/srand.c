#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
        printf("%d\n", rand()); //for unsighed seed
	printf("%d\n", rand()%5 +1); //for range random 
	printf("%d\n", rand());
        return 0;
}
