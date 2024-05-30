#include<iostream>
using namespace std;
class myclass{    //the class
	public:   //access specifier
		int mynum;  //attribute (int variable)
		string mystring; ////attribute (char variable)
};
int main(){
	myclass myobj;
	myobj.mynum = 15;
	myobj.mystring = "some text";
	cout<<myobj.mynum <<"\n";
	cout<<myobj.mystring<<"\n";
	return 0;
}
