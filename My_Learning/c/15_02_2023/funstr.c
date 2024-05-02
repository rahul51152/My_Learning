#include<stdio.h>

int  mystr(char *s){
int len=0;
while(*s!='\0'){
len++;
s=s+1;
}return len;
}
void main(){
char a[10] = "ANKIT";
printf("%d\n",mystr(a));


}
