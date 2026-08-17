#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
