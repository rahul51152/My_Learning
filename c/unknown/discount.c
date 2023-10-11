#include<stdio.h>
void main()
{
int item,amount,total,amount1;
printf("how many selected the item  :");
scanf("%d",&item);
printf("how many rupees for one item  :");
scanf("%d",&amount);
total = item*amount;
if(total>1000)
{
  printf("you get 10 per. discount :\n");
  amount1= amount-(0.1*total);
  printf("you have to pay :  %d\n",amount1);
}
else 
  printf("you have to pay :  %d\n",amount);

}
