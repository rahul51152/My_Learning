#include<stdio.h>
void main()
{
int n,count;
int a[7]={10,20, 5, 15, 5, 15, 15};
for( int i=0;i<7;i++){
count =0;
     for( int j =0;j<7;j++){
         if (a[i]==a[j]){
       count++;
}
}printf("%d : %d\n",a[i],count);
}
}
