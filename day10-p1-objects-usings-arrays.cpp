#include<iostream>
using namespace std;
// we will try to make array of of OBJECTS

class Employee{
  int id;
  int salary;
  public:
  void setId(void){
    salary =111;
    cout<<"Enter id of the emplyoee"<<endl;
    cin>>id;
  }
  void getId(){
    cout<<"The id of emplyoee is "<<id<<endl;
  }

};

int main(){
    //Employee maddy;  this was
    //maddy.setId();   older
    //maddy.getId();   methods

    // If we want to store the data of 100 empplyees
    // of a complany the we can store that using an 
    // array

    Employee x[4]; // This is how we store it
    for (int i = 0; i < 3; i++)
    {
        x[i].setId();
        x[i].getId();
        
    }
    
    

    
   
return 0;
}
