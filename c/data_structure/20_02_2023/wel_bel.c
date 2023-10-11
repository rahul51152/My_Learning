#include<stdio.h>
#include<string.h>
int size=10;
 printf("%d\n",max);int top=-1;

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
	int i,f=0;
	char a[10];
	char exp[10]="[{()}][]";
	for(int i=0;i<strlen(exp);i++){
		if(exp[i]=='['|| exp[i]=='{'|| exp[i]=='('){
			push(a,exp[i]);
		}
		else{
			if(exp[i]==']'&& a[top]=='[' || exp[i]=='}'&& a[top]=='{' || exp[i]==')'&& a[top]=='('){
				pop(a);
			}
			else
				f=1;
		}

	}
}


printf("--------------------------------------\n");
if(top==-1&&f=0){
printf("string is balanced\n");
}
else
printf("string is not  balanced\n");
}
