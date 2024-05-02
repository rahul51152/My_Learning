#include<stdio.h>
void main(){
	int a[4]={13,7,6,12};
	for(int i=0;i<4;i++){
		int temp=-1;
		for(int j=i+1;j<4;j++){
			if(a[i]<a[j]){
			temp=a[j];
			break;
			}	
		}
		printf("%d\n",temp);
	}
}


