#include<stdio.h>
void main()
{
int n,i,j,temp,count;

 printf("Enter number :");


   scanf("%d",&n);
int a[n];
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
count =0;
for( int i=0;i<n;i++){
    for(int j=i+1 ; j<n; j++){
if(a[i]+a[j]>=0 && a[i]+a[j]<1){

    printf("sum of the %d and %d is closest to zero\n",a[i],a[j]);
}
}
}
}

