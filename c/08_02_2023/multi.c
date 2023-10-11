#include<stdio.h>
void main()
{
	int a[3][4];
	for ( int i=0;i<3;i++){
		printf("\n enter the row=%d : \n",i);
     		for ( int j=0;j<4;j++){
        		scanf("%d",&a[i][j]);
		}
	}
	for ( int i=0;i<3;i++){
     		for ( int j=0;j<4;j++){
        		printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
