#include<stdio.h>
void main()
{
int n;
int a[25];
int b[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
printf("---------------------------------------------------\n");
for( int i=0;i<n;i++){
   printf("%d element of array-1 :%d\n",i, a[i]);
}
printf("---------------------------------------------------\n");

for( int i=0;i<n;i++){
  b[i]==a[i];
printf("%d element of array-2 : %d\n",i,a[i]);
}
}

