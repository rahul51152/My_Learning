#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string mytext;
        ifstream myfile("filename.txt");
        while(getline(myfile,mytext)){
		cout<<mytext;
	}
        myfile.close();
}
