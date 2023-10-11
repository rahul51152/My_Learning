#include<stdio.h>
void main()
{
float m,cm,feet,inch;
printf("Enter your height in feet :");
scanf("%f",&feet);
m= feet*3.28084;
inch = feet*12;
cm = feet*30.48;
printf("%f feet is equal to :%f meters \n",feet,m);
printf("%f feet is equal to :%f inch \n",feet,inch);
printf("%f feet is equal to :%f centimeter\n",feet,cm);
}
