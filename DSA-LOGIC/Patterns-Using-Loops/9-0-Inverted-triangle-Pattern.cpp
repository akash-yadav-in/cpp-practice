#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// 1111
//  222
//   33
//    4

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int m = n; m > i; m--)
        {

            cout << i + 1;
        }

        cout << endl;
    }

    return 0;
}
