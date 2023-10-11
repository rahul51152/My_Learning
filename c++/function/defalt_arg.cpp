#include<iostream>
#include<string>
using namespace std;
void myfun(string country = "Norway"){
	cout<<country<<"\n";
}

int main(){
	myfun("sweden");
	myfun("india");
	myfun();
	myfun("usa");
	return 0;
}
