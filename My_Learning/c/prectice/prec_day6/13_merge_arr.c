#include<stdio.h>
void main()
{
int i,j,n,d ,count=0;
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
}
for(i=0;i<n;i++){
c[i]=a[i];
}

for(i=n,j=0;i<2*n,j<n;i++,j++){
c[i]=b[j];
}

for(i=0;i<2*n;i++){
printf("%d\n",c[i]);
}
}
