#include <iostream>
using namespace std;

// we learned that how to make class 1 function as a friend of any 2nd class
// and alsi forward declratoion
// Forward declration --- giving compiler a guranteee that class complex is ahead there

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumComplex(complex, complex);
    int sumcomComplex(complex, complex);
};

class complex
{
    int a, b;
    // here we declared the friend function Individually 
    // but we cam make a friend class for declaring 100s of friends

    // friend int calculator ::sumComplex(complex, complex);
    // friend int calculator ::sumcomComplex(complex, complex);
    


    
    // HOW TO DECLARE THE WHOLE CLASS AS A FRIEND
    friend class calculator;

    

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNum(void)
    {
        cout << "Your Number is " << a << " + " << b << "i " << endl;
    }
};


int calculator ::sumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}


int calculator ::sumcomComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}



int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(3, 3);
    calculator calc;
    int res = calc.sumComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    int resm = calc.sumcomComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resm << endl;

    return 0;
}
