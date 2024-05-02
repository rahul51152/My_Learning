#include<stdio.h>
void main(){
FILE *fp1,*fp2; //p is a file type pointer
char ch1;       //ch is the use to store single character
fp1=fopen("1.c","r");
fp2=fopen("1.c","r");
do{

ch1=gets(fp1);
putc(ch1,fp2);

}while(ch1!=EOF);
fclose(fp1);
fclose(fp2);
printf("file is copied successfully...");
}
