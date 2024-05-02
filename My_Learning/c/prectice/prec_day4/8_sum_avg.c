#include<stdio.h>
void main(){
int sum=0;
printf("enter the value of  n  :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
sum=sum+i;
}
printf("sum : %d",sum);
printf("avg : %f",sum/n);
}
