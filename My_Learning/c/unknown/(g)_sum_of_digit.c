#include<stdio.h>
void main()
{
int a,b1,b2,b3,b4,b5,sum;
printf("enter the number :");
scanf("%d",&a);
b1 = a%10;
a=a/10;
b2 = a%10;
a=a/10;
b3 = a%10;
a=a/10;
b4 = a%10;
a=a/10;
b5 = a%10;
sum = b1+b2+b3+b4+b5;
printf(" sum of the all digit is : %d \n", sum);
}
