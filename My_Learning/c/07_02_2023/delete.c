#include<stdio.h>
void main()
{
int n,i,temp,b;
int a[5];
for( int i=0;i<5;i++){
   printf("Enter the %d element of array :",i);
   scanf("%d",&a[i]);
}
printf("enter the ith value to delete the number :");
scanf("%d",&b);

printf("new array is...:");
for( int i=0;i<b;i++){
printf("element : %d\n",a[i]);
}

for( int i=b;i<4;i++){
a[i]=a[i+1];
printf("element : %d\n",a[i]);
}
}



