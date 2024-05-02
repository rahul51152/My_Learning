#include<stdio.h>
#include<string.h>
int  main(){
int i;
char buffer[33];
scanf("%d",&i);
snprintf(buffer,33,"%d",i);
printf("decimal : %s\n",buffer);
return 0;
}
