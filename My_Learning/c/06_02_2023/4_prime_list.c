#include<stdio.h>
void main()
{
int i,j,n;
 printf("enter number :");
   scanf("%d",&n);
 printf("prime number  : \n");
for(i=2;i<=n;i++)
{   int c=0;
    for(j=2;j<=i/2;j++){
     if(i%j==0){
       c++;
      break;
      }
     }
    if(c==0 && c!=1){
       printf("%d\n",i);
    }
}
}
