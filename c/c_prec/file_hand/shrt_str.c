#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char a[20][10];
	char temp[10];
	FILE *fp;
	fp=fopen("string.txt","a+");
	int n=0;
	while(fscanf(fp,"%s",a[n])!=EOF){
		n++;
	}
	//printf("lenth of array :  %d\n",n);
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n;j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(temp,a[i]);
				
				strcpy(a[i],a[j]);
			
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++){
		fprintf(fp,"%s\n",a[i]);
	}
	fclose(fp);
	return 0;
}


