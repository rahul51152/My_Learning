#include<iostream>
using namespace std;
int main(){
	char a[10]="hello";
	char *ptr;
	ptr=a;
	while(*ptr!='\0'){
		cout << "char : "<<*ptr<<"\n"<<ends;
		ptr=ptr+1;
	}
	return 0;
}	
