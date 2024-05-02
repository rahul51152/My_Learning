#include<stdio.h>
 typedef struct date {

int day;
int month;
int year;
};
 
 void main(){
struct date s1,s2;
int n;
printf("year: ");
scanf("%d",&s1.year);
printf("month : ");
scanf("%d",&s1.month);
printf("day : ");
scanf("%d",&s1.day);

printf("year: ");
scanf("%d",&s2.year);
printf("month : ");
scanf("%d",&s2.month);
printf("day : ");
scanf("%d",&s2.day);

if(s1.year==s2.year && s1.month==s2.month && s1.day==s2.day)
printf("equal\n");
else
printf("not equal\n");



}
