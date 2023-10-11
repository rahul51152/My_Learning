#include<stdio.h>
#include<string.h>

int main()
{
  const char str[] = "linuxkernel.com";
  const char ch = '.';
  char *ret;

  ret = memchr(str,ch,strlen(str));

  printf("String after **%c** is - **%s** \n",ch,ret+1);

  //printf("String before **%c** is - **%s** \n",ch,ret-11);

  return (0);
}
