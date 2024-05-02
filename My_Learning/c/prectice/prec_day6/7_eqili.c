#include<stdio.h>
void main()
{
int n,l=0,r=0,i,j,k;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array : ",i);
   scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
printf("element : %d\n",a[i]);
 int l=0;
 int r=0;
   for(j=0; j<i; j++){
    l=l+a[j];
}printf("sum of the left side element : %d\n",l);
for(k=i+1; k<n; k++){
    r=r+a[k];
}printf("sum of the right side element : %d\n",r);

if(l==r){
printf("%d element is %d is equilibrilium\n",i,a[i]);
}
printf("---------------------------------------------\n");
}
}
