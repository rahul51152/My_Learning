#include<stdio.h>
void main()
{
int i,n,flag=1;
 printf("enter number :");
   scanf("%d",&n);
for(i=2;i<n;i++){
    if(n%i==0){
    flag = 0;
    break;
    }}
if(flag==1){
    printf("%d is prime number .....\n",n);
}
else 
    printf("%d is not prime number .....\n",n);

}


