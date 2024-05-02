#include<stdio.h>
void main(){
	int s, start, end,sum;
	printf("enter the value of S   :");
	scanf("%d",&s);
	int a[5]={1,2,3,7,5};
	for( int i=0;i<5;i++){
		sum=a[i];
           	for( int j=i+1;j<5;j++){
            		sum= sum+a[j];
               		if(sum==s){
            			start=i;
            			end =j;
           			for(int k =start; k<=end; k++){
      					printf("%d ",a[k]);
       
      				} 
			}
      
 		}
		printf("\n");
	}
}
