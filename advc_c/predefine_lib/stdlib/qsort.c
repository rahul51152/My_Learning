#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int data[5]={54,3,12,9,24};
	int comp_int(const void *,const void *);
	qsort(data,5,sizeof(int),comp_int);
	for(int i=0;i<5;i++){
		printf("%d\n",data[i]);
	}
}

int comp_int(const void *p1,const void *p2){
	const int i1 = *(const int *)p1;
	const int i2 = *(const int *)p2;
	return i1-i2;
}
