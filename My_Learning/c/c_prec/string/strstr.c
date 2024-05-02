#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ispresent(char *a,char *b){
	for(int i=0;i<strlen(a)-strlen(b);i++){
		for(int j=0;j<strlen(b);j++){
			if(a[i]!=a[j]){
				break;
			}
			else
				if(j==strlen(b)-1){
				printf("at index %d substring present \n",i);
				return ;
			}
		}	
	}
	printf("sub string is not present in the string\n");
}



int main(){
	char a[15]="rahul chauhan";

	char b[10]="hul";
	ispresent(a,b);


}
