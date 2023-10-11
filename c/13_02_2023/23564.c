#include<stdio.h>
void main()
{
int n,i,rem,rem1,rev=0;

printf("Enter number :");
scanf("%d",&n);
while(n>0){
rem=n%10;
rev= rev*10+rem;
n=n/10;
}

while(rev>0){
 rem1=rev%10;
  for(i=1;i<=rem1;i++){
       printf("*");
      }printf("\n");
rev=rev/10;
}
}
