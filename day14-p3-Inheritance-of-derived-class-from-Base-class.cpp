#include<iostream>
using namespace std;

// Inheritance Examples

// This is ths Base class Below one
class Employee{
    public:
    int id;
    float salary;
        Employee(){}
        Employee(int in){
        id = in;
        salary = 233.33;
     }

};

/* Derived Class
  Its syntax 
  class {{ derived_class_name }} : {{ visibility_mode }} {{ base_class_name }}            
 ========================================================================================   
 1 . this visibility is of inheritance = {{ visibility_mode }}
 2 .  -I-M-P-O-R-T-A-N-T--> DEFAULT VISIBILITY MODE IS ((((((PRIVATE)))))
 ========================================================================================
 3 . In Private visibility mode--> Public members of base class becomes private memeber of derived class
 4 . In Public visibility mode----> Public memebers of base class becomes Public memebers of derived class
           But-------------> Private members of BASE class CANNOT BE INHERITED 
           OR NEVER BECOME MEMBER OF DERIVED CLASS

  
  
  {         
    then here you can write methods/members/etc...
   };
*/

// Creating a  Derived Class named Programer from Emplyoee Base class

class Programmer : public Employee{
    public:
    Programmer(int inid)
    {                      // we need to change two things ----> 1. we have to move the int id to public in emplloyee class so that it can be inherited
                           // 2. you have to change the visibility mode from defualt to public :: 
        id = inid;         // Here if you use id = inid ---> This will throw and error because the id is privately defined in emplyoee class and it cannot be inhertited as we disscussed in above point
    }    
    int laguage_code = 200;

    void getData(void){
        cout<<id<<endl;
        
    }

    
};


int main(){
    Employee rohan(1), dev(2);
    cout<<rohan.salary<<endl;
    cout<<dev.salary<<endl;

    // Derived class 
    Programmer skillf(19);
    cout<<skillf.id<<endl;
    cout<<skillf.laguage_code<<endl;
    skillf.getData();


return 0;
}
