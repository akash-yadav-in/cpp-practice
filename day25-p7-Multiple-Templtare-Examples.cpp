#include <iostream>
using namespace std;

// Other uses of template
// Below we see that we can also give T1 and other one a constant variable type

template <class T1 = int, class T2 = float>

class boil
{
public:
    T1 a;
    T2 b;

    boil(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The Value of a is " << a << endl;
        cout << "The Value of b is " << b << endl;
    }
};

int main()
{
    boil<> d(2, 23.33); // IF we leave this blank then default T1 AND T2 DEFINED WILL BE USED
    d.display();

    cout << endl;
    boil<float, char> c(34.33, 'f'); // Here if we specify the type of variable then it will use those accodingally
    c.display();

    return 0;
}
