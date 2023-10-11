//allocat the memory of array static and dynamic 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5] = {1,2,3,4,5}; // static allocation
	

	int *b[3];
	b[0]= (int *)malloc(4*sizeof(int));
	b[1]= (int *)malloc(4*sizeof(int));
	b[2]= (int *)malloc(4*sizeof(int));

	int **c;
	c= (int **)malloc(3*sizeof(int *));
	c[0]=(int *)malloc(4*sizeof(int));
	c[1]=(int *)malloc(4*sizeof(int));
	c[2]=(int *)malloc(4*sizeof(int));

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("array of c[%d] value : %d\n",i,c[i][j]);
		}
	}
	 return 0;
}

