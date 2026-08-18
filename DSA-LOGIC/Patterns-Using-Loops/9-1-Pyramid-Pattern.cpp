#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
//    1
//   121
//  12321
// 1234321

int main()
{
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) // This is The outermost loop for intializing the vericla how many time it has to be called
    {
        // This loop is for printing the spaces coming before the numbers
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }

        // This is the loop for numbers just after the spaces are completed the first triangle part
        for (int m = 0; m < i + 1; m++)
        {
            cout << m + 1;
        }

        // This loop is for the loast traingle part after 2 nd line
        for (int c = i; c > 0; c--)
        {

            cout << c;
        }

        cout << endl;
    }

    return 0;
}
