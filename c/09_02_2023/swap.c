#include<stdio.h>
void main()
{
int temp;
int a[8];

printf("input :\n");
    for(int i=0;i<8;i++){
   scanf("%d",&a[i]);
}


for ( int i=0;i<8;i=i+2){
   temp=a[i];
   a[i]=a[i+1];
   a[i+1]=temp;
}


printf("Output : ");
for ( int i=7;i>=0;i--){
      printf("%d",a[i]);
   }
  printf("\n");
}
