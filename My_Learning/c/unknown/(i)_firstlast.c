#include<stdio.h>
void main()
{
int a,b1,b2,b3,b4,sum;
printf("enter the number :");
scanf("%d",&a);
b1 = a%10;
a=a/10;
b2 = a%10;
a=a/10;
b3 = a%10;
a=a/10;
b4 = a%10;
sum = b1+b4;
printf("Sum of the first and last digit is : %d \n",sum);
}
