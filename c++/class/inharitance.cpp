#include <iostream>
using namespace std;
//base class
class vehicle{
	public :
	string brand = "ford";
	void hork(){
		cout<<"tuut ,tuut\n";
	}
};

class car: public vehicle{
	public :
		string model = "mustang";
};

int main(){
	car mycar;
	mycar.hork();
	cout<<mycar.brand+" "+mycar.model;
	vehicle ford;
	ford.hork();
	//cout<<ford.brand+" "+ford.model;
	return 0;
}
