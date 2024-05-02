#include<stdio.h>
#include<string.h>
void main(){
	char s[20],ch;
	printf("Enter the string : ");
	scanf("%s",s);
	for(int j=0; j<strlen(s);++j){
		while(s[j]>= 33 && s[j]<= 64 ){
			for(int i=j; s[i]!='\0';++i)
				s[i]=s[i+1];
		}
		
	}
	printf("%s\n\n",s);

}
