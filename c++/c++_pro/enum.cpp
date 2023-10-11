#include<iostream>
#include<string>
using namespace std;
enum meal{
	breakfast,
	lunch,
	dinner
};
int main(){
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;

	meal m1=lunch;
	cout<<m1<<endl;
	return 0;
}
