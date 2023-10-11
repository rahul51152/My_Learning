#include<stdio.h>
void main()
{
int amount,_100,_50,_10_1,_10;
printf("Enter amount :");
scanf("%d",&amount);
_100=amount/100;
_50=(amount-_100*100)/50;
_10_1=amount-(_100*100);
_10=(_10_1-_50*50)/10;
printf("your are collected 100 note is : %d\n",_100);
printf("your are collected 50 note is : %d\n",_50);
printf("your are collected 10 note is : %d\n",_10);
}
