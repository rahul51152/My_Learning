#include<stdio.h>
void main()
{
int temp;
int a[6]={1,5,3,4,6,7};
for ( int i=0;i<6;i++){
for ( int j=i+1;j<6;j++){
     if(a[i]>a[j]){
     temp=a[i];
      a[i]=a[j];
       a[j]=temp;
}
}
}

for ( int i=0;i<6;i++){
printf("%d\n",a[i]);

}
}
