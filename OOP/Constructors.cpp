#include <iostream>
#include <string>
using namespace std;

class employee{
  public:
    string Name;
    int Age;
    string Company;
  
  void setValue(string name, int age, string company){
    Name = name;
    Age = age;
    Company = company;
  }
  void getValue(){
    cout<<"Name "<<Name<<endl;
    cout<<"Age "<< Age<<endl;
    cout<<"Company "<<Company<<endl;
  }
  
};
int main(){
  employee uuid1;
  uuid1.setValue("Rohan", 23, "Amazon");
  uuid1.getValue();
  
  return 0;
}
