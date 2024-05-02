#include<stdio.h>

int main()
{
  int n;
  printf("enter a number\n");

  scanf("%d",&n);

  switch(n)
  {
    case 1:
    printf("result = one\n");
    break;

    case 2:
    printf("result = two\n");

    case 3:
    printf("result = three\n");
    break;

    default:
    printf("INVALID\n");
    break;
  }
}
