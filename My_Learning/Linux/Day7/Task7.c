#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
	char prt[20]="hello\n";
	char buf[10];	
	write(1,prt,sizeof(prt));
	read(0,buf,sizeof(buf));
	write(1,buf,sizeof(buf));
	return 0;
}
