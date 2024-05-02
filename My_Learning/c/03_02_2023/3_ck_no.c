#include<stdio.h>
void main()
{
int i,n,no,p=0,ng=0,z=0,even=0,odd=0;
 printf("enter number which loop is terminated :");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   printf("enter number :");
   scanf("%d",&no);
   if(no>0){
   p++;
   }
   if(no==0){
   z++;
   }
   if(no<0){
   ng++;
   }
   if(no%2==0){
   even++;
   }
   if(no%2!=0){
   odd++;
   }
}
  printf("%d positive no\n",p);
  printf("%d negative no\n",ng);
  printf("%d zero no\n",z);
  printf("%d even no\n" , even);
  printf("%d odd no\n",odd);
}
