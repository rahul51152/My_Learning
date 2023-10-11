#include<stdio.h>
void main()
{
int i,n0,n,sum= 0,rem,temp;
 printf("Enter number :");
   scanf("%d",&n);

for(i=1;i<=n;i++){
n0=i;
sum=0;
int temp = n0;
      while(n0>0){
      rem=n0%10;
      sum=sum+rem*rem*rem;
      n0=n0/10;
      }
if(temp==sum){
printf("armstrong number is %d\n",sum);
}
}
}



 
