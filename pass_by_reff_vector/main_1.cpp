#include<iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_string_vector(const vector<string> &v);

void pass_by_ref1(int &num){
	num=100;
}

void pass_by_ref2(string &s){
	s="changed";
}

void pass_by_ref3(vector<string> &v){
	v.clear();
}

void print_string_vector(const vector<string> &v){
	for(auto s: v)
		cout<<s<<" ";
	cout<<endl;
}

int main(){
	int num=10;
	int another_num =20;
	string name {"hello"};
	vector<string> str {"hello","Rahul!","I","am","at","office"};

	cout<<"num before calling pass_by_ref1: "<< num <<endl;
	pass_by_ref1(num);
	cout<< "num after calling pass_by_ref1: "<< num <<endl;
	
	cout<<"name before calling pass_by_ref2: "<< name <<endl;
	pass_by_ref2(name);
	cout<< "name after calling pass_by_ref2: "<< name <<endl;
	
	cout<<"list before calling print funcion: "<<endl;
	print_string_vector(str);
	pass_by_ref3(str);
	cout<< "list after calling print function: "<<endl;
	return 0;
}	
	
