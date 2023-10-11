#include<stdio.h>
void main()
{
int i,n,rev= 0, rem,temp , par ;
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
else{
  int rev2 = temp;
  par=temp/10;
 while(par>0){ 
  rem = par%10;
  rev2 = rev2*10+rem ;
  par = par/10;
 }
printf("the peridrom number is %d\n",rev2);
}
}
