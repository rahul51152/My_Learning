#include<stdio.h>
void main()
{
int a[25];
int n, miss, sum=0, sum1;
printf("enter the  value of  n :");
scanf("%d",&n);
printf("array is :\n");
for( int i=0;i<n-1;i++){
   scanf("%d",&a[i]);
}

for( int i=0;i<n-1;i++){
   sum=sum+a[i];
}
sum1=n*(n+1)/2;
miss=sum1-sum;
printf("missing element of the array is : %d\n",miss);
}

