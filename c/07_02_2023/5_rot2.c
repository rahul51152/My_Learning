#include<stdio.h>
void main()
{
int n,i,temp;
int a[5];
for( int i=0;i<5;i++){
   printf("Enter the %d element of array :",i);
   scanf("%d",&a[i]);
}
printf("right side shifted array......\n");
temp=a[4];
for( int i=4;i>0;i--){
a[i]=a[i-1];
}
a[0]=temp;
for( int i=0;i<5;i++){
   printf(" the %d element of array : %d\n",i,a[i]);
}//printf("element : %d\n",temp);
}
