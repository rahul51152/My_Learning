#include<stdio.h>

int calculate_bill(int code,int a){
int bill=0,price;
if(code==101){
price=150;
}
if(code==102){
price=100;
}
bill=a*price;
return bill;
}

void main()
{
int code,a,c;
printf("enter the code of food  : ");
scanf("%d",&code);
printf("enter the quantity ofbthe food ");
scanf("%d",&a);
c=calculate_bill(code,a);
printf("%d\n",c);
}
