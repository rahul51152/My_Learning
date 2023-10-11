#include<stdio.h>

char  grade(int m){
if(m<=100 &&m>80){
return 'A';
if(m<=80 &&m>60){
return 'B';
if(m<=60 &&m>50){
return 'C';
if(m<=50 &&m>40){
return 'D';
if(m<=40 &&m>30){
return 'E';
}
}

void main()
{
int n1;
printf("enter the first value : ");
scanf("%d",&n1);
char c=grade(n1);
printf("%c", c);
}
