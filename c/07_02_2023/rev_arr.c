#include<stdio.h>
void main()
{
int n;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
printf("---------------------------------------------------\n");
for( int i=n-1;i>=0;i--){
   printf("Enter the %d element of array : %d\n",i,a[i]);
}
}
