#include<stdio.h>
#include<string.h>

int main(){
	char str[30];
	char a[5];
	int count=0;
	int flag;

	printf("line :");
	scanf("%s",str);
	printf("pattern :");
	scanf("%s",a);

	for(int i=0;i<strlen(str);i++){
		for(int y=0; y<strlen(a);y++){
			if(str[i]==a[y]){
				count++;

				if(count==strlen(a)){
					flag=1;
					printf("pattern starting at index : %d\n",i-strlen(a)-1);
				}
					
			}
		}
	}
	if(flag!=1)
		printf("pattern is not present in th line\n");
	return 0;
}

	



