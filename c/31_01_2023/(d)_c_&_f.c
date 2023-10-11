#include<stdio.h>
void main()
{
float f,c1,c;
printf("Enter the tempreture in fahrenheit:");
scanf("%f",&f);
c1=(f-32);
c=c1*0.00222;
printf("The tempreture in centigrade degree : %f\n",c);
}
