#include<stdio.h>
void main()
{
int n,p=0,ng=0,z=0,odd=0,even=0;
int a[25];
int b[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}
for( int i=0;i<n;i++){
 if(a[i]>0)
p++;
}
printf("%d  positive number\n",p);

for( int i=0;i<n;i++){
 if(a[i]<0)
ng++;
}
printf("%d  negative number\n",ng);


for( int i=0;i<n;i++){
 if(a[i]==0)
z++;
}
printf("%d  zeros number\n",z);

for( int i=0;i<n;i++){
 if(a[i]%2==0)
even++;
else
odd++;
}
printf("%d  even number\n",even);
printf("%d  odd number\n",odd);
}


