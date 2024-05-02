#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the first value:");
scanf("%d",&a);
printf("enter the second value:");
scanf("%d",&b);
printf("enter the third value:");
scanf("%d",&c);
printf("enter the fourth value:");
scanf("%d",&d);
if(a>b && a>c && a>d)
printf("%d  : is the maximum number\n ",a);
if(b>a && b>c && b>d)
printf("%d  : is the maximum number\n ",b);
if(c>b && c>a && c>d)
printf("%d  : is the maximum number\n ",c);
if(d>b && d>c && d>a)
printf("%d  : is the maximum number\n ",d);
}
