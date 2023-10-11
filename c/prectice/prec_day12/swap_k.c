#include<stdio.h>
#include<string.h>


int main(){
	char a[100];
	int k,j,b;
	printf("enter the string : ");
	scanf("%s",a);
	printf("enter the k value for reversing string : ");
	scanf("%d",&k);
	for(int i=0;i<strlen(a);i=i+2*k){
		for(j=i,b=(i+k)-1;j<b;j++,b--){
			char temp = a[j];
			a[j]=a[b];
			a[b]=temp;
		}
	}
	printf("%s\n",a);
	return 0;
}


