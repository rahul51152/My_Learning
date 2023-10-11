#include<iostream>
#include<string>
using namespace std;
union money{
	int rice;
	char car;
	float pounds;
};

int main(){
	union money m1;
	m1.rice=34;
	cout<<m1.rice<<"\n";
	m1.car='a';
	cout<<m1.car<<"\n";
	cout<<m1.rice<<"\n";
	return 0;
}

