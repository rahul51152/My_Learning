#include<stdio.h>
void main()
{
int n,d ,count;
int a[25],b[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
   b[i]=a[i];
}
printf("array is :\n");
for( int i=0;i<n;i++){
printf("%d\n",b[i]);
}
}
