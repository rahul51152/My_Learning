#include<stdio.h>
#include<stdlib.h>

void buggy()
{
  int *intptr;
  intptr = (int *)malloc(sizeof(int));

  *intptr = 100;
  printf("value at ptr intptr = %d\n",(*intptr));
  free(intptr);  //we free here dynamic allocated ptr
  *intptr = 99; //trying to derefer here.
  printf("value at ptr intptr = %d\n",(*intptr));
}

int main()
{
  buggy();
  return 0;
}
