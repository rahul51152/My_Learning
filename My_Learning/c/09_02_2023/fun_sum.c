#include<stdio.h>

void sum1(int n1,int n2){
   int result =n1+n2;
printf("results is  %d\n",result);
}
int sum2(int n1, int n2){
int result =n1+n2;
return result;
}

void main()
{
int n1,n2,rst,p;
printf("enter the first value : ");
scanf("%d",&n1);
printf("enter the second value : ");
scanf("%d",&n2);
sum1(n1,n2);
 rst =sum2(n1,n2);
printf(" sum  is : %d",rst);
}
