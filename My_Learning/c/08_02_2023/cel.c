#include<stdio.h>
void main(){
	int a[4][4]= {{0,1,1,0},{1,0,1,0},{0,0,0,0},{1,0,1,0}};
	for ( int i=0;i<4;i++){
		int sum =0;
		int sum1 =0;
     		for ( int j=0;j<4;j++){
        		sum=sum+a[i][j];
       		}
		if(sum==0){
        		for ( int k=0;k<4;k++){
        			sum1=sum1+a[k][i];
         			if(sum1==3){
        				printf("%d is celebrity\n",i);
				}
			}
		}
	}
}
               

