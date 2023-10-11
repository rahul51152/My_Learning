#include<stdio.h>
void main()
{
int i,h,d, count=8 ;
 printf("enter number of holidays :");
   scanf("%d",&h);
for(i=1;i<=h;i++){
    printf("date of the %d holiday  :",i);
    scanf("%d",&d);
if( 6==d || 7==d || 13==d || 14==d || 20==d || 21==d || 27==d || 28==d){
   ; 
}
else {
count++;
}
}
printf("total holidays is %d\n",count);
}

