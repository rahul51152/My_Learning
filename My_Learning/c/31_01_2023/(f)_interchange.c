#include<stdio.h>
void main(){

int a,b,i,f;
printf("Enter the first value :");
scanf("%d",&a);
printf("Enter the second value :");
scanf("%d",&b);
i=b;
f=a;
a=i;
b=f;
printf("first value is : %d\n",a);
printf("sceond value is : %d\n",b);
}

