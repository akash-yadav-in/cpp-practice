#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// A
// B B
// C C C
// D D D D

int main()
{

    for (int i = 64; i < 90; i++)
    {
        for (int j = 64; j < i + 1; j++)
        {

            int x = (i + 1);
            char p = int(x);
            cout << p;
        }
        cout << endl;
    }

    return 0;
}
