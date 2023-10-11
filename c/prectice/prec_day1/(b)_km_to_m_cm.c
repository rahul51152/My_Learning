#include<stdio.h>
void main()
{
int a;
float m,cm,feet,inch;
printf("Enter the km :");
scanf("%d",&a);
m= a*1000;
inch = m*39.3701;
feet = m*3.28084;
cm = m*100;
printf("%d km is equal to :%f meters \n",a,m);
printf("%d km is equal to :%f feet \n",a,feet);
printf("%d km is equal to :%f inch \n",a,inch);
printf("%d km is equal to :%f centimeter \n",a,cm);
}
