#include<stdio.h>
#include<string.h>
void  main(){
	int i=0,n;
	int j=0; 
	int count;
	char s[30]="hello kem chhe majama";
	char w[10];
	printf("string : %s\n",s);
	printf("enter substring :");
	scanf("%s",w);
	n=strlen(s);
	while(j!=n){
		if(w[i]==s[j]){
		i++;
		j++;
		if(strlen(w)==i){
			count=1;
			}
		}
		else{
			j++;
			i=0;				
		}
}
if(count!=1){
	printf("word is not in the string\n");
}
else
printf("word is in the string\n");
	
}
	
