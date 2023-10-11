#include<stdio.h>
void main()
{
char c;
printf("char :");
scanf("%c",&c);
if(c>64 && c<91)
printf("char is the uper case ");
if(c>97 && c<122)
printf("char is the lower case ");
if(c>47 && c<58)
printf("digit");
}
