#include <iostream>
using namespace std;

class complex
{
    int a, b;

    friend complex sumComplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Use of Friend functions acts as a written permission for sumComplex to use private variable a and b
    

    void PrintNum(void)
    {
        cout << "Your Number is " << a << " + " << b << "i " << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex x, y, sum;
    x.setNumber(2, 2);
    y.setNumber(5, 8);
    x.PrintNum();
    y.PrintNum();

    sum = sumComplex(x, y);
    sum.PrintNum();

    return 0;
}

/*Properties if Friend Function
 1. It is not in the scope of the class
 2. Can be involked without the help of an object
 3. Usually contains objects as arguments
 4. Can be declared inside public or private function
 5. It cannot access the members direectly by their names 


*/ 

