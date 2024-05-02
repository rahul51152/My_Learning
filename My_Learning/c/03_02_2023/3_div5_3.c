#include<stdio.h>
void main()
{
int i,n;
printf("enter number :");
scanf("%d",&n);
for(i=1;i<=n;i++){
   if(i%5==0 || i%3==0 ){
   printf("%d\n",i);

   }
}
}
