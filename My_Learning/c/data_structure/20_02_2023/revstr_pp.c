#include<stdio.h>
#include<string.h>
int size=5;
int top=-1;

void push(char a[],char data){
if(top==size-1){
printf("stack is full\n");
return;
}
top=top+1;
a[top]=data;
printf("%c is pushed in the stack\n",a[top]);

}


int pop(char a[]){
if(top==-1){
printf("stack is empty\n");
return;
}
top=top-1;
printf("%c is removed from the stack\n",a[top+1]);
return a[top+1];

}

void main(){
int a[size],i;
char s[5]="HELLO";
for(int i=0;i<strlen(s);i++){
push(a,s[i]);
}
printf("--------------------------------------------------\n");
for(i=0;i<strlen(s);i++){
s[i]=pop(a);
}s[i]='\0';

printf("--------------------------------------------------\n");
for(i=0;i<strlen(s);i++){
printf("%c",s[i]);
}printf("\n");

}
















