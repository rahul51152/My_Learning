#include<iostream>
using namespace std;
int main(){
	string cars[5] = {"volvo","bwm","ford","mazda","tesla"};
	for(int i=0;i<5;i++){
		cout<<cars[i]<<"\n";
	}
	int name[6] = {10,20,20,30,30,50};
	for(int i : name){
		cout<<i<<"\n";
	}
	return 0;
}
