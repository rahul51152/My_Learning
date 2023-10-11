#include<stdio.h>
void main()
{
char ch;
printf("Enter  any the character :\n");
scanf("%c",&ch);
switch(ch){
 case 'a':
 case 'i':
 case 'o':
 case 'u':
 case 'e':
 case 'A':
 case 'U':
 case 'O':
 case 'E':
 case 'I':
 printf("it is the vowel : %c\n ", ch);
 break;

 default:
 printf("it is not vowel\n");
}
}
