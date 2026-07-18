#include <iostream>
using namespace std;
// Compilation of things taught in  of lec 46-48

// Constructor in Derived class
/*
 CASE 1:

 class B : public A{
 // Order Of execution of we made constructor in both class A and B will be
 First Base class that is A will execute then B class that is derived one

 };

 CASE 2:
 class A : public B, public C{
 // Order of execution of   constructor --> B() THEN C() AND THEN A()

 };

 CASE 3:
 class A::public B , Vritual Public C{
 // So here the constructor of will be --> Virtual Public C then B() and then A()
 };

 */

class base
{
    int data;

public:
    base(int m) // Here We made a constructor
    {
        data = m;
        cout << "Base class constructor is called " << endl;
    }

    void print1()
    {
        cout << "The value of data is " << data << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int x)   // Here also we made a constructor
    {
        data2 = x;
        cout << "Base2 class constructor is called " << endl;
    }

    void print2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class derived : public base, public base2
{
    int derived1, derived2;

public:
    // below is SYNTAX FOR HOW to call the base and base 2 constructor in derived class
    
    derived(int a, int b, int c, int d) : base(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void print()
    {
         base ::print1(); 
         base2 ::print2();
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{

    derived  g(1 , 2 , 3 , 4 );
    g.print();


    return 0;
}
