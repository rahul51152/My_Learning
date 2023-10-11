#include<stdio.h>
void main()
{
int i,n,rev= 0, rem,temp;
 printf("enter number :");
   scanf("%d",&n);

temp=n;
while(n>0){
rem = n%10;
rev = rev*10+rem;
n=n/10;
}
printf( "reverse no : %d\n",rev);


if (temp==rev)
 { printf("the number is peridrom....\n");
}
else 
printf("the number not  is peridrom....\n");
}
