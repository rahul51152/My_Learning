#include<stdio.h>
void main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printf("%d\n",*(*(a+1)+1));
	int *p;
	p=&a[0][0];
	for(int i=0;i<3;i++){
    		for(int j=0;j<3;j++){
        		printf("%d",p+i* (*a)+j);

}
}
}
