// Bundling or tying together data, and methods that operate upon that data so that they are grouped together in a class

#include <iostream>
#include <string>
using namespace std;

class voter{
  private: //it's private by default
    string Name;
    int Age;
    string votedFor;
  public:
  void castVote(string name, int age, string candidateSelected){
      if(age<18)
        cout<<"Sorry! you are below 18, you can not cast vote\n";
      else{
        Name = name;
        Age = age;
        votedFor = candidateSelected;
        cout<<"You voted successfully\nYour voting info are as below \n";
        getInfo();
      }
  }
  void getInfo(){
    cout<<"Name "<<Name<<endl;
    cout<<"Age "<< Age<<endl;
    cout<<"votedFor "<<votedFor<<endl;
  }
  
};
int main(){
  voter uuid1,uuid2;
  uuid1.castVote("Rohan", 23, "Democrate");
  uuid2.castVote("Ram", 17, "Republican");
  return 0;
}
