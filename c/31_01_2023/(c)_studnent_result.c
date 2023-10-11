#include<stdio.h>
void main()
{
int f1,f2,f3,f4,f5,sum;
float prs;
printf("Enter the 1st subject mark out of 100 :");
scanf("%d",&f1);
printf("Enter the 2nd subject mark out of 100 :");
scanf("%d",&f2);
printf("Enter the 3rd subject mark out of 100 :");
scanf("%d",&f3);
printf("Enter the 4th subject mark out of 100 :");
scanf("%d",&f4);
printf("Enter the 5th subject mark out of 100 :");
scanf("%d",&f5);
sum=f1+f2+f3+f4+f5;
printf(" the total subject mark out of 500 is : %d\n",sum);
prs=sum*0.2;
printf(" your  persiontages is  : %f\n ",prs);
}
