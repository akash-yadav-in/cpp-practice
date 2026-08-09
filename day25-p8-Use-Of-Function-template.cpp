#include <iostream>
using namespace std;

// we will see how function template work
// Also Learninig To know How to swap two variables

template <class T>

void swaap(T &d, T &f)
{
    T temp = d;
    d = f;
    f = temp;
}
template <class T1, class T2>

float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;

    return avg;
}

int main()
{
    float v;
    v = funcAverage(5, 22);
    cout << v << endl;

    int x = 5;
    int y = 7;
    cout << "Initial vlaue of x is " << x << "  " << "And Y  is " << y << endl;
    swaap(x, y);

    cout << "The swapped value of x is " << x << " and  Y is " << y << endl;

    return 0;
}
