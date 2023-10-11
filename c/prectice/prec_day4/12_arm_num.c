#include<stdio.h>
void main()
{
int i,n,sum= 0, rem,temp;
 printf("enter number :");
   scanf("%d",&n);
temp=n;
while(n>0){
rem = n%10;
sum = sum+rem*rem*rem;
n=n/10;
}
printf( "reverse no : %d\n",sum);
 
if(temp==sum)
printf("number is armstrong no .....\n" );
else 
printf("number is  not armstrong no .....\n" );
}
