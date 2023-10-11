#include<stdio.h>
void main()
{
int n,i,temp;
int a[5];
int b[5];
for( int i=0;i<5;i++){
   printf("Enter the %d element of array-1 :",i);
   scanf("%d",&a[i]);
}
for( int i=0;i<5;i++){
   printf("Enter the %d element of array-2 :",i);
   scanf("%d",&b[i]);
}
int c =0,g=0;
for( int i=0;i<5;i++){
if(a[i]==b[i]){
c++;
}
else {
g++;
}
}
if(c>4)
printf("both arrays are same -\n");
else
printf("both array are not same\n");
}

