/*attandance list with string*/
# include<stdio.h>
#include<string.h>
void main(){
	char b[10];
	int n,a=0,l=0;
	printf("Enter the attandance  :");   //for absent "A", late "L" , present "P"
	scanf("%s",b);
	n=strlen(b);
	for(int i=0;i<n;i++){
		if(b[i]=='A'){
 			a++;
		}
		if(b[i]=='L'){
  			l++;
		}
	}
	if(a<=2&&l<3)
		printf("true\n");
	else
		printf("false\n");
}




