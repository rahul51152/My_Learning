#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *d;
	int num;
	d=fopen("demo.txt","r");
	while(fscanf(d,"%d",&num)>0){
		if(num%2==0){
			FILE *fd1;
			fd1=fopen("even.txt","a");
			fprintf(fd1,"%d\n",num);
			fclose(fd1);
		}
		else{
			
			FILE *fd2;
			fd2=fopen("odd.txt","a");
			fprintf(fd2,"%d\n",num);
			fclose(fd2);
		}
	
	}
	fclose(d);
}	
