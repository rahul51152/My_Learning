#include<stdio.h>
void main()
{
int d,y,m,d1;
printf("how many days  :");
scanf("%d",&d);
y=d/365;
m = (d-y*365)/30;
d1= d-365*y-m*30;
printf("%d year %d month %d days\n",y,m,d1);

}
