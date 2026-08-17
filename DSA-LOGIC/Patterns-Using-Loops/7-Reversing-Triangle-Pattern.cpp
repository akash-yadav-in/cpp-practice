#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}
