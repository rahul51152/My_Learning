#include<stdio.h>
void main()
{
int a, a1,a2,a3,a4,a5;
int b1,b2,b3,b4,b5,sum;
printf("enter the number :");
scanf("%d",&a);
a1 = a%10;
b1 = (a1+1)%10;
a=a/10;
a2 = a%10;
b2 = (a2+1)%10;
a=a/10;
a3 = a%10;
b3 = (a3+1)%10;
a=a/10;
a4 = a%10;
b4 = (a4+1)%10;
a=a/10;
a5 = a%10;
b5 = (a5+1)%10;
printf(" your number is : %d%d%d%d%d \n",b5,b4,b3,b2,b1);
sum= b1+b2+b3+b4+b5;
printf("sum of five digit number : %d \n",sum);
}
