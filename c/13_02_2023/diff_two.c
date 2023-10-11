#include<stdio.h>
void main()
{
int n,i,j,temp,max;

 printf("Enter number :");
   scanf("%d",&n);
int a[n];
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
max=a[1]-a[0];
for( int i=0;i<n;i++){
    for(int j=i+1 ; j<n; j++){
if(a[j]-a[i]>max){
max=a[j]-a[i];

}
}
}printf(" diff is : %d\n",max);
}
