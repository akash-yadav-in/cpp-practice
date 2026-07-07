#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:    
//=---===----===---===--CONSTRUCTORS---====-----====-----====
// CONSTRUCTOR IS A SPECIAL MEMBER FUNCTION WITH SAME NAME AS THAT OF THE CLASS
// It is used to intialise the objects of its class
// Whenever an object is created It is automatically ------- Invoked(meaning calling that function) -----
// Constructor like Complex(void)----- is default constructor as it takes no parameter

// -------- PROPERTIES ----------
// It should be declareed in public section of class
// they are invoke whenever the object is created
// Do not have return type and their return type is not void also
// It can have sefault arguments
// We cannot refer to the address


    Complex(void); // Constructors Declaration
    

    // This is print function
    void printData(void){
        cout<<"The value of Real and complex is "<<a<<" +"<<b<<"i"<<endl;
    }

};
Complex ::Complex(void){
    a = 10;
    b = 0;
    // another example
    cout<<"Hello, User "<<endl;
}


int main(){
    // This is how we use it
    Complex c;
    c.printData();
    
   
return 0;
}
