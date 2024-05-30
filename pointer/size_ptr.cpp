#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){

	int *ptr {nullptr};
	int num {10};
	cout<<"value of num is : "<<num<<endl;
	cout<<"size of num is : "<<sizeof num<<endl;
	cout<<"address of num is : "<<&num<<endl;

	cout<<"value of ptr is : "<<ptr<<endl;
	cout<<"size of ptr is : "<<sizeof ptr<<endl;
	cout<<"address of ptr is : "<<&ptr<<endl;

	int *p1 {nullptr};
	double *p2 {nullptr};
	long *p3 {nullptr};
	unsigned long long *p4 {nullptr};
	vector<string> *p5 {nullptr};
	string *p6 {nullptr};


	cout<<"size of int ptr is : "<<sizeof p1<<endl;
	cout<<"size of double ptr is : "<<sizeof p2<<endl;
	cout<<"size of long ptr is : "<<sizeof p3<<endl;
	cout<<"size of unsinged long long ptr is : "<<sizeof p4<<endl;
	cout<<"size of vector<string> ptr is : "<<sizeof p5<<endl;
	cout<<"size of int string is : "<<sizeof p6<<endl;

	return 0;
}
