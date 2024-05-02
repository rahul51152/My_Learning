#include<stdio.h>
#include<string.h>

int main()
{
  char dest[] = "newstring";
  const char src[] = "oldstring";

  printf("Before memmove dest = %s, src = %s\n",dest,src);

  memmove(dest,src,4);

  printf("After memmove dest = %s, src = %s\n",dest,src);

  return (0);
}
