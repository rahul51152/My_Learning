#include<stdio.h>
#include<string.h>

int count=0;
int count1=0;
int cap(char a){
	if(a >='A' && a<='Z')
		return 1;
	if(a>='a'&& a<='z')
		return 0;
	}



int main(){
	char str[100];
	scanf("%s",str);
	int n= strlen(str);
	for(int i=0;i<n;i++){
		if(cap(str[i])==1){
			count++;
		}
		else{
			count =0;
		}
		if(cap(str[i])==0){
			count1++;
		}

		else{
			count1=0;
		}

	}

	if(n==count || n==count1 || cap(str[0])==1 && count1==n-1)
		printf("true\n");

	else
		printf("false\n");
	return 0;
}

