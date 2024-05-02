#include<stdio.h>

void main()
{
  int n,d1,d2,d3,d4,d5,a1,a2,a3,a4,a5;

  printf("Enter five digit number : ");
  scanf("%d",&n);

  d1 = n%10;
  a5 = (d1-1);
  n = n/10;
  
  d2 = n%10;
  a4 = (d2-1);
  n = n/10;

  d3 = n%10;
  a3 = (d3-1);
  n = n/10;

  d4 = n%10;
  a2 = (d4-1);
  n = n/10;

  d5 = n%10;
  a1 = (d5-1);
  n = n/10;

  printf("Digit = %d%d%d%d%d\n",a1,a2,a3,a4,a5);

}
