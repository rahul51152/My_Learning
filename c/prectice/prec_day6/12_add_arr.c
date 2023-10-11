#include<stdio.h>
void main()
{
int n,d ,count=0;
int a[25],b[25],c[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
}
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&b[i]);
    c[i]=a[i]+b[i];
}

for( int i=0;i<n;i++){
   printf("element of array : %d\n",c[i]);
}
}
