#include<stdio.h>
void main()
{
float l,b,a,p,r,per,area;
printf("Enter the lenth of rectangle :");
scanf("%f",&l);
printf("Enter the breadth of rectangle :");
scanf("%f",&b);
p=2*l+2*b;
printf("The Parimeter of rectangle is  : %f\n",p);
a=l*b;
printf("The area of rectangle is  : %f\n",a);


printf("Enter the redius of circle :");
scanf("%f",&r);
per= 2*3.14*r;
printf("The Parimeter of circle is  : %f\n",per);
area = 3.14*r*r;
printf("The area of circle is  : %f\n",area);
}
