#include<stdio.h>
void main()
{
int n,i,j,k,count;

 printf("Enter number :");
   scanf("%d",&n);
int a[n];
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
count=0;
for( int i=0;i<n-1;i++){
if(a[i]%2==0 && a[i+1]%2==0 ){
count++;
}
if(a[i]%2!=0 && a[i+1]%2!=0 ){
count++;
}

}
if(count==0)
printf("yes\n");
if(count>0)
printf("no\n");

}





