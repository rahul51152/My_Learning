#include<stdio.h>
void main()
{
int x,y,output1,output2;
printf("Enter the value of x :");
scanf("%d",&x);
printf("Enter the value of y :");
scanf("%d",&y);
output1 = (x*x*x)+x*x+2*x+5;
output2 = x*x+y*y+2*x*y-10;
printf("output of the first equ. is : %d\n",output1);
printf("output of the second equ. is : %d\n",output2);
}
