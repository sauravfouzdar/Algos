//Abstraction means displaying only essential information and hiding the background details and Implementation.


#include <iostream>
#include <string>
using namespace std;


class AbstractEmployee{
  virtual void AskforPromotion()=0;
};
  
class Employee:AbstractEmployee{
  private: //it's private by default
    string Name;
    int Age;
    string Company;
   
  public:
     void setValue(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
     void getValue(){
        cout<<Name<<" "<<Age<<" "<<Company<<"\n";
    }
    void AskforPromotion(){
      if(Age>60)cout<<"It's time for retirement buddy\n";  
      else if(Age > 30) cout<<"Promoted\n";
      else cout<<"No promotion available\n";
    }
   
 

  
};
int main(){
  Employee uuid1;
    uuid1.setValue("Rohan", 34, "Amazon");
    uuid1.getValue();
    uuid1.AskforPromotion();
  
  return 0;
}
