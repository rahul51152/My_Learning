#include<stdio.h>

int main(int argc,char *argv[])
{
  int i;
  printf("\n File Name : %s\n",argv[0]);
  printf("\n Total Number of Arguments : %d\n",argc);
  printf("\n Arguments Passed : \n");

  for(i=1;i<argc;i++)
  {
    printf("%s ",argv[i]);
  }
  printf("\n");
}
