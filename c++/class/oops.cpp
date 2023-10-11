#include<iostream>
#include<string>
using namespace std;
	//oops classes and object
	//c++ initialy called c with classes by stroustroup
	//class-->extension of structure(in c)
	//structures had limitation
	//---->memners are public
	//---->no method
	// =>classes=structure+more
	// classes can have methods and properties
	//class -> can make few members as private and few as public
	//structure in c++ are typedefed
	//you can declear object rights along with the class declaration
	/*class employ{
	 * class defination
	 * }haerry,rohan,lovish;
	 */

class binary{
	 string s;
	 public :
	 void read(void);
       	 void chk_bin(void);
	 void onces(void);
	 void display(void);
};

void binary :: read(void){
	cout<<"Enter the binary number : ";
	cin>>s;
}

void binary :: chk_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0'&& s.at(i)!='1'){
			cout<<"Incorrect binary format\n";
			exit(0);
		}
	}
}

void binary :: onces(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0'){s.at(i)='1';}
		if(s.at(i)=='1'){s.at(i)='0';}
	}
}

void binary :: display(void){
	cout<<"Displaying your binary number"<<endl;
	for(int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
	printf("\n");
}
int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.display();
	b.onces();
	b.display();
	return 0;
}
