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
    for(int j=i+1 ; j<n ; j++){
       if (a[i]==a[j]){
        temp= a[i];
      count++;
}
}
}if(count>=n/2)
printf("%d is in array %d times ",temp,count);
}
