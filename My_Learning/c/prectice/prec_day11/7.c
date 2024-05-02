#include<stdio.h>
#include<string.h>


int is_palli(char s[]){
	int n=strlen(s);
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--){
		if(s[i]!=s[j]){
			return 0;
		}
	}

	return 1;
}




int main(){
	char s[10];
	int a;
	printf("enter the string :");
	scanf("%s",s);
	a=is_palli(s);
	if(a==1)
		printf("string is pallidropme\n");
	else
		printf("string is not pallidrome\n");
}



