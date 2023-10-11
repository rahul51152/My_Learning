#include<stdio.h>
#include<string.h>
void main(){
	int e=0;
	int n=0;
	int a=0;
	int count;
	char s[30];
	printf("string :");
	scanf("%s",s);
	for(int i=0; i<strlen(s);i++){
		if(s[i]>=33 && s[i]<=47){
			e++;
		}
		if(s[i]>=48 && s[i]<=64){
			n++;
		}
		if(s[i]>=65 && s[i]<=122){
			a++;
		
		}
		count++;
	}
	printf("symbols is in string : %d\n",e);

	printf("numbers is  in string : %d\n",n);
	
	printf("alphabets is  in string : %d\n",a);
}

