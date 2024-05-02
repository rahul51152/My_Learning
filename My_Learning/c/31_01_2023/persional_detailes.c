#include<stdio.h>
void main(){
char name[30], city[20],branch[10];
int birth_year, age;
printf("Enter your name : \n");
scanf("%s",name);
printf("Enter your birth year :\n");
scanf("%d",&birth_year);
printf("Enter your city :\n");
scanf("%s",city);
printf("Enter your branch :\n");
scanf("%s",branch);
age=2023-birth_year;
printf("your age is %d \n",age);
}



