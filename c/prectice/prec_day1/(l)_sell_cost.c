#include<stdio.h>
void main()
{
int sel,pro,cost,itm;
printf("enter the selling price of the 15 items :");
scanf("%d",&sel);
printf("enter the profit of the 15 items :");
scanf("%d",&pro);
cost = sel-pro;
printf("cost of the 15 items is :%d \n",cost);
itm=cost/15;
printf("cost of the one items : %d \n",itm);
}
