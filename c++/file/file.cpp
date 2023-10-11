#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream myfile("filename.txt");
	myfile<<"file can be tricky, but it is fun enough";
	myfile.close();
}
