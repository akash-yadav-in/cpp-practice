#include <iostream>
using namespace std;

// Ambiguity example 1

class Base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Who are you? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    // like this way we define it which greet it want to use

public:
    void greet()
    {
        Base1::greet();
    }
};

// Example 2 of Ambiguity

class B
{
public:
    void say()
    {
        cout << "Hello, World" << endl;
    }
};

class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello People" << endl;
    }
};

int main()
{
    // Example 1 Ambiguity-----> 1

    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet(); // if we write this directly without defining it in the deriverd class there will be and ambiguity that which greet
               // it want to run so we define it

    // Example Of Ambiguity------> 2

    B b;
    b.say(); // here from these two B and D
             // so we made say in both the programs but what if
             // if we did not write a say program in derived class but also we called
             // m.say then here it will print the say function of B class
             // and this is how it resolve the ambiguity on its own

    D m;
    m.say();

    return 0;
}
