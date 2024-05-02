#include<stdio.h>
int fun(){
	extern int count;
	count =10;
	return count;
}
