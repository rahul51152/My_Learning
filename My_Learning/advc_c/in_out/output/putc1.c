#include<stdio.h>
int main(){
	int i=0;
        char ch[] = "hello jason,\nwhat ever!\n";
	while(ch[i]!='\0'){
		if(ch[i]!='\n')
       		putchar(ch[i]);
		++i;
	}
        return 1;
}
