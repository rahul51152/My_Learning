#include<stdio.h>
void main()
{
int i,dis,n;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
}

for( int i=0;i<n;i++){
dis=a[i]-a[i+1];
printf("different between two point : %d\n",dis);
}
}
