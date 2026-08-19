#include <iostream>
using namespace std;

int main()
{
    // Upper Part of butterfly
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int m = 1; m < 2 * (n - i) - 1; m++)
        {
            cout << " ";
        }
        cout << "*";
        for (int z = 0; z < i; z++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Below Part  of Butterfly
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < 2 * i + 1; k++)
        {
            cout << " ";
        }
        cout << "*";
        for (int f = n; f > i + 1; f--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
