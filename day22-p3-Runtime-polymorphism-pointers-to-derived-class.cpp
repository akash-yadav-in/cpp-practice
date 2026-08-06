#include <iostream>
using namespace std;

// Pointers -----> to -----> Derived class

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class Variable var_base = " << var_base << endl;
    }
};

class derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class Variable var_base = " << var_base << endl;

        cout << "Displaying Base class Variable var_derived = " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer; // base class pointer
    Base obj1;                // base class object1
    derived obj_derive;       // derived class object --> obj_derive

    // It is fully Legal that base class pointer can point derived class object
    base_class_pointer = &obj_derive;

    // Here we are accessing base class var_base using base class pointer
    base_class_pointer->var_base = 3;
    base_class_pointer->display(); // Here binding happend with base class display function

    // BUT We cannot access var_derived using base class pointer will throw an error
    // base_class_pointer->var_derived = 99;

    // Derived class Pointer
    derived *derived_class_pointer;
    derived_class_pointer = &obj_derive;
    derived_class_pointer->var_derived = 23;
    derived_class_pointer->display(); // Here binding happend with derived class display

// but jo ye assign hota hai function to base and object derived is done at runtime and this is called as runtimepolymorphism
// means display wale toh 2 hai but runtime pe define hua kon wala kab run hoga

    return 0;
}
