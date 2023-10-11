#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i=0;
	int j=0,freq;
	char s[30],w[20];
	printf("Enter the string :");
	scanf("%[^\n]s",s);
	printf("Enter word to find its frequency :");
	scanf("%s",w);


	int len1 =strlen(s);
	int len2 =strlen(w);


	for(i=0;i<=len1-len2;i++){
		for(j=0;j<len2;j++){
			if(s[i+j]!=w[j]){
			break;
			}
		}
		if(j==len2){
			freq++;
		}
	}
	printf("string : \"%s\" frequency -> %d\n",w,freq);
}

				       	
				
