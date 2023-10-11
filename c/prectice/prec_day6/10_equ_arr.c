#include<stdio.h>
void main()
{
int n,d ,count=0;
int a[25],b[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&a[i]);
}

for( int i=0;i<n;i++){
   printf("Enter the %d element of array\n : ",i);
   scanf("%d",&b[i]);
}


for( int i=0;i<n;i++){
if(a[i]==b[i])
count++;

else
;
}
if(count==n){
printf(" both array are same \n");
}
else
printf("both array are note same \n");

}
