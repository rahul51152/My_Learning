#include<iostream>
#include<string>
#include<vector>

/*we can make same name function using passing multiple argumant for same function. */

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num){
	cout<< "printing int :: "<< num << endl;
}

void print(double num){
	cout<< "printing double :: "<< num << endl;
}

void print(string s){
	cout<< "string :: "<< s << endl;
}

void print(string s,string t){
	cout<< "string 1 :: "<< s <<"stiring 2 :: " << t <<endl;
}
void print(vector<string> v){
	cout<<"pring vector of string :"<<endl;
	for(auto s:v)
		cout<<s + " ";
	cout<<endl;
}

int main(){
	print(100);
	print('A');
	print(123.5);
	string s{"C++ string"};
	print(s);
	cout<<endl;
	return 0;
}
