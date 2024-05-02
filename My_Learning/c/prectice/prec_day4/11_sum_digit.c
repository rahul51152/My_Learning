#include<stdio.h>
void main()
{
int i,n,sum= 0, rem;
 printf("enter number :");
   scanf("%d",&n);
while(n>0){
rem = n%10;
sum = sum+rem;
n=n/10;
}
printf( "sum of the digit is %d\n",sum);

}
