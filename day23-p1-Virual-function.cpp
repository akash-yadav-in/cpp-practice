#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 21;

    // base_class_pointer->display();  when we run this from main function its default behaviou is tor tun the display functon 1 of base class but if we want to run display of derived class then we use virtual functio for it

    // Virutal here below ----> says that agar mere class ka pointer derived class ke object ko point kare to uska hi display run karna mer displa function nahi

    virtual void display()
    {
        cout << "1 Displaying Base class Variable var_base = " << var_base << endl;
    }
};

class derived : public Base
{
public:
    int var_derived = 45;
     void display()
    {
        cout << "2 Displaying Base class Variable var_base = " << var_base << endl;

        cout << "2 Displaying Base class Variable var_derived = " << var_derived << endl;
    }
};

int main()
{
    // below i made a base class pointer
    Base *base_class_pointer;

    // Below made a object of derived class
    derived obj_derived;

    // Below made a base class object
    Base obj_base;

    // Below we pointer base class pointer with derived class object
    base_class_pointer = &obj_derived;

    // Below we are runing base class pointer display function
    base_class_pointer->display();

    return 0;
}
