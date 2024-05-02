
#include<stdio.h>
void main()
{
int n,i,temp;
int a[25];
int b[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
printf("left side shifted array......")
temp=a[0];
for( int i=0;i<n-1;i++){
a[i]=a[i+1];
printf("element : %d\n",a[i]);
}
printf("element : %d\n",temp);
}

printf("left side shifted array......")
temp=a[0];
for( int i=n;i>=0;i--){
a[i]=a[i+1];
printf("element : %d\n",a[i]);
}
printf("element : %d\n",temp);
}
