#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	int max;
	int a[5]={10,20,4,3,2};
	int min=a[0];
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(a[j]>=a[i]){
				max=a[j];
			}
		}
		for(int j=0;j<5;j++){
			if(a[j]<min){
				min=a[j];
			}
		}

	} 
	printf("%d\n",max);
	printf("%d\n",min);
	return 0;
}
