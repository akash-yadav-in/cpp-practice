#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// 1
// 1 2
// 1 2 3
// 1 2 3 4

int main()
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << j + 1;
        }
        cout << endl;
    }

    return 0;
}
