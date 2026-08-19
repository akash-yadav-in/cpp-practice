#include <iostream>
using namespace std;
int minOf2nums(int a, int b)
{
    if (a > b)
    {
        cout << b << " is minimum" << endl;
        cout << a << " is maximum" << endl;
    }
    else
    {
        cout << a << " is minimum " << endl;
        cout << b << " is maximum " << endl;
    }
}

int main()
{
    minOf2nums(23, 66);
    return 0;
}
