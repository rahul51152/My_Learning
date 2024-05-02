#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define SIZE 10
void show_array(const int ar[],int n);
static_assert(sizeof(double)==2*sizeof(int),"double not twice int size");

int main(){
	int value[SIZE]= {1,2,3,4,5,6,7,8,9,10};
	double curious[SIZE/2] = {2.0,2.0e5,2.0e10,2.0e20,5.0e30};
	int target[SIZE];
	puts("memcopy() used:");
	show_array(value,SIZE);
	memcpy(target,value,SIZE*sizeof(int));
	puts("target (copy of value) : ");
	show_array(target,SIZE);

	puts("\nusing memove() with overlapping ranges : ");
	memmove(value+2,value,5*sizeof(int));
	puts("value -- elements 0-5 copied to 2-7");
	show_array(value,SIZE);

	puts("\nusing memcpy() to copy double to int :");
	memcpy(target,curious,(SIZE/2)*sizeof(double));
	puts("target --5 double into 10 int positions :");
	show_array(target,SIZE/2);
	show_array(target+5,SIZE/2);

	return 0;
}

void show_array(const int ar[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}

