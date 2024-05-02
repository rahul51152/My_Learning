#include<stdio.h>
void main()
{
int n,buy,sell,q,total,p;
printf("enter number share :");
scanf("%d",&n);
while(n!=0){
printf("Enter the buying price of one share : ");
scanf("%d",&buy);
printf("Enter the quantity of share : ");
scanf("%d",&q);
printf("Enter the selling price of  share : ");
scanf("%d",&sell);
p=(sell-buy)*q;
printf("%d",p);
total+=p;
printf("enter number share :");
scanf("%d",&n);
}
printf("total bill  : %d\n",total);

}
