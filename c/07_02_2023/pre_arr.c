#include<stdio.h>
void main()
{
int n,i,n1;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
 
printf("Enter your Element :");
scanf("%d",&n1);

for( int i=0;i<n;i++){
 if(n1==a[i]){
printf("yes it is present in array--\n");
break;
}
else if(i==n-1)
printf("no it is not present in array\n");
}
}
