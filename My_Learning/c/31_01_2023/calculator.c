#include<stdio.h>
void main()
{
int a, b;
int sum,sub,mul,diff;
printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b); 
sum=a+b;
sub=a-b;
mul=a*b;
diff=a/b;
printf("sum of the %d and %d is : %d\n",a,b, sum);
printf("subtraction of the %d and %d is : %d\n",a,b, sub);
printf("multiplication of the %d and %d is : %d\n",a,b, mul);
printf("diffrasion of the %d and %d is : %d\n",a,b, diff);
}
