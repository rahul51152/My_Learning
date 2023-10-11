#include<iostream>
#include<string>
using namespace std;
int main(){
	string letters[2][4]={{"A","B","C","D"},
			      {"E","F","G","H"}
			     };
	for(int i=0;i<4;i++){
		cout<<letters[0][i]<<"\n";
	}

	string three[2][2][2] = {
				{{"a","b"},
				{"c","d"}
				},
				{{"e","f"},
				{"G","f"}
				}
				};
	cout<<three[0][0][0]<<"\n"<<ends;
	return 0;
}
