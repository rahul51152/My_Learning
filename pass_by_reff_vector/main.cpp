#include<iostream>
#include<vector>

void print(std::vector<int> &v);

int main(){
	std::vector<int> data {1,2,3,4,5};
	print(data);
	return 0;
}
void print(std::vector<int> &v){
	for(auto num: v){
		std::cout << num << std::endl;
	}
}
