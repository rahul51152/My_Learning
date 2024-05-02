#include<stdio.h>
#isnclude<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	int f;
	f=open("a.txt",O_CREAT|O_RDWR,0777);
	printf("hello bhai\n");
	dup2(f,1);
	printf("hello mota bhai\n");
	return 0;
}
