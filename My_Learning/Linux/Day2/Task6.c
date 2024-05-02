#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]) //argc counts total number of arguments
{                               //argv stores all parameters
  int i;
  printf("\n File Name : %s\n",argv[0]); //a.out
  printf("\n Total Number of Arguments : %d",argc);
  printf("\n Arguments Passed : ");
  for(i=1;i<argc;i++)
  {
    printf("%s ",argv[i]);
  }
  printf("\n");
}
