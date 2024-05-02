#include<stdio.h>
void main(){
int n,rem,sum=0,rem1,sum1=0,temp;
 printf("Enter number :");
scanf("%d",&n);
temp=n;
while(sum!=1 && sum!=4){
sum=0;
     while(n>0)
    {
    rem = n%10;
    sum=sum+rem*rem;
    n=n/10;
    }
temp=sum;
n=sum;
}
if(temp==1){
 printf("number is the happy number\n");
}
else
 printf("number is not the happy number\n");

}
 

