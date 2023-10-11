#include<stdio.h>

void main()
{
   //Find maximum number
   //scan 4 numbers
   int a,b,c,d;

   printf("Enter the value : ");
   scanf("%d %d %d %d",&a,&b,&c,&d);

   if(a>b && a>c && a>d)
   {
      printf("a is maximum\n");
   }

   else if(b>c && b>d)
   {
      printf("b is maximum\n");
   }

   else if(c>d)
   {
      printf("c is maximum\n");
   }

   else
   {
      printf("d is maximum\n");
   }
}
