#include<stdio.h>
void main()
{
int n ,min, max;
int a[25];
 printf("Enter number :");
   scanf("%d",&n);
for( int i=0;i<n;i++){
   printf("Enter the %d element of array %d\n : ",i);
   scanf("%d",&a[i]);
}
for( int i=0;i<n;i++){
   printf("%d Element of array : %d\n",i,a[i]);
}

min = a[0];
for( int i=0;i<n;i++){
if(a[i]<min){
 min=a[i]; 
} 
}
printf("min number in array is %d\n",min);
max = a[0];
for( int i=0;i<n;i++){
if(a[i]>max){
   max=a[i];
}
}
  printf("max number in array is %d\n",max);

}

