#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[100];
	FILE *fp;
	fp=fopen("string.txt","a+");
	int n=0;
	while(fscanf(fp,"%d",&a[n])!=EOF){
		n++;
	}
	printf("lenth of array :  %d",n);
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n;j++){
			if(a[i]>a[j]){
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		fprintf(fp,"%d\n",a[i]);
	}
	fclose(fp);
	return 0;
}


