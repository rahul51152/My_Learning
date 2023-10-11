#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the first no :\n");
scanf("%d",&a);
printf("Enter the second no :\n");
scanf("%d",&b);
printf("addition : 1\nsubtraction : 2\nmultiplication : 3\ndivision : 4\n");
scanf("%d",&c);
switch(c){
 case 1:
 printf("sum is : %d\n",a+b );
 break;
 
case 2:
 printf("subtraction is : %d\n",a-b );
break;

case 3:
 printf("multiplication  is : %d\n",a*b );
break;

case 4:
 printf("divisionis  : %d\n",a/b );
break;

}
}
