#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Here int x and int y when yuo get then
    // set a = x ,and b = y
    complex(int x, int y) // argument 1
    {
        a = x;
        b = y;
    }

    // use of multiple constructors ----- constructors overloading

    complex(int x){ // argument 2
        a = x;
        b = 0;
    }

    complex(){     // argument 3
        a = 0;
        b = 0;
    }

    void printData(void)
    {
        cout << "The value of Real and complex is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // Argument 1 example
    complex c(4, 3);
    c.printData();

    // Argument 2 example
    complex m(2);    
    m.printData();

    // Argument 3 example--- here we did ,not givent any argument like int::
    complex x;
    x.printData();
    

    return 0;
}
