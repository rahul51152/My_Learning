#include<stdio.h>
void main()
{
int i,n,code,q,price,bill,total_bill=0;
printf("enter number :");
scanf("%d",&n);
while(n!=0){
printf("Enter the code : ");
scanf("%d",&code);
printf("Enter the quantity : ");
scanf("%d",&q);
 if(code == 101)
 price = 150;

if(code == 102)
 price = 200;

if(code ==103)
 price = 30;

if(code ==104)
 price = 100;
bill = price*q;
printf(" rupee :  %d\n",bill);
printf("enter number :");
scanf("%d",&n);
total_bill+=bill;

}
printf("total bill  : %d\n",total_bill);

}
