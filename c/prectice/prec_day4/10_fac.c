#include<stdio.h>
void main()
{
int n,fac=1;
printf("enter number : ");
scanf("%d",&n);
for (int i=1; i<=n;i++){
fac=i*fac;
}
printf("factorial of num is : %d\n",fac);
}
