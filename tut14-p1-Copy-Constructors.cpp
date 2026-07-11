#include <iostream>
using namespace std;
// How to use copy constructors

class number
{
    int a;

public:
    number()
    {
        a = 0;

    } // Here we have made a default constructor so that it can obtain the defined m , n , o from main
    number(int num) // Here we have made a constructor
    {               // we also have to make default constructor as in line 8 as we have made a constructor
        a = num;
    }

    // Here we are trying to make copy constructors
    // we are taking the reference of the object we assigned
    // In Breif Meaning
    // so when we assigned m = 88 and hence the num  = a so the value of a for m = 88
    // now in next part the we assignes the parameter to take the reference of m or  = a = 88
    // and z1 a = m's a = 88 and this is how the copy constructor worked here
    // One important point to note is that first
    // 1. if we dont make a copy constructor like below one then also the value of m willl be copies

    // ---I-M-P-O-R-T-A-N-T---->> 2. because the compiler always define a default copy constructor for every class <<-----------------

    // 3. In number z1(m)--- if we write===> number z1(z1)---> this will give a garbage value
    number(number &obj)
    {
        cout << "Copy constructor is called ----> ;) " << endl;
        a = obj.a;
    }

    void print(void)
    {
        cout << "The value of number is " << a << endl;
    }
};

int main()
{
    number m(88), n, o(45), z2;
    m.print();
    n.print();
    o.print();

    // say we want to make z1 object that is exactly resembles z
    // we can Use Copy Constructors

    number z1(o); // Copy constructor invoked
    z1.print();

    z2 = o; // Here the copy constructor is not called

    number z3 = n;
    z3.print(); // Here  wcopy constructor will  be called

    return 0;
}
