#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main(){
	Employee myobj;
	myobj.setSalary(200);
	cout << myobj.getSalary()<<endl;
	return 0;
}
