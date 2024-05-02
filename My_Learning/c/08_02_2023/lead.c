#include<stdio.h>
void main()
{
int a[100], j;
int n ;
printf("enter the  value of  n :");
scanf("%d",&n);
printf("array is :");
for( int i=0;i<n;i++){
   scanf("%d",&a[i]);
}

for( int i=0;i<n;i++){
 int flag=0;
       for(  j=i+1;j<n;j++){
        if(a[i]<a[j]){
       flag=1;
         break;
}
}
if(flag==0){
printf("%d\n",a[i]);
}
}
}
