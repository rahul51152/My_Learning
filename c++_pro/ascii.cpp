#include<iostream>
using namespace std;
int main(){
	char ch = 'A';
	char *ptr;
	ptr=&ch;
	while(*ptr<91){
		printf("%c",*ptr);
		*ptr=*ptr+1;
	}
	printf("\n");
	return 0;
}
