#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// 1
// 2 2
// 3 3 3
// 4 4 4 4

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}
