#include<stdio.h>
#include<string.h>
char a[10];
char* del_wov(char s[]){
		int n=strlen(s);
		int j=0;
		for(int i=0;i<n;i++){
				if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u'){
					a[j]=s[i];
					j++;
				}
				
		}
		return a;
}											

int main(){
	char s[10];
	printf("enter the string :");
	scanf("%s",s);
	printf("%s\n",del_wov(s));
}
