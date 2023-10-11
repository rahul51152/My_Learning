#include<stdio.h>

void mystrcpy(char *s1,char *s2){
char *p=s1;
while(*s2!='\0'){
*p=*s2;
s2++;
p++;
}
}
void main(){
char a[10] = "ANKIT";
char b[10];
mystrcpy(b,a);
for(int i=0;i<5;i++){
printf("%c\n",b[i]);
}
}
