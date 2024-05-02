#include<stdio.h>
#include<string.h>

int main(){
	int n,j;
	char a[20][50];
	char max='A';
	printf("how many name you want to store : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter name : ");
		scanf("%s",&a[i][50]);
	}

	for(j=0;j<n;j++){

		for(int i=j+1;i<n;i++){
			if(strcmp(a[j],a[i])>0){
				char temp[20];
				strcpy(temp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],temp);
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}



	return 0;


}

