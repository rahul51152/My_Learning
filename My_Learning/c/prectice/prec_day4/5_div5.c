#include<stdio.h>
void main()
{
int i,n, sum =0;
printf("enter number :");
scanf("%d",&n);
for(i=1;i<=n;i++){
   if(i%5==0){
   printf("%d\n",i);
   sum = sum+i;
   }
}
printf("sum is : %d\n", sum);
}
