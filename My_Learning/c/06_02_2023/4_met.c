#include<stdio.h>
void main()
{
int n;
printf("enter the value of the n : ");
scanf("%d",&n);
for( int i=1;i<=n;i++){
     for( int j=1;j<=n;j++){
     printf("*");
}
     printf("\n");
}
}
