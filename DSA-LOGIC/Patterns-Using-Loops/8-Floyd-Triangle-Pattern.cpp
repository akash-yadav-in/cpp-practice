#include <iostream>
using namespace std;

// Use Pen and Paper and try to put value and see how the loops Logic Is Running
// Objcitve here
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main()
{
    int sum = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int m = 0; m < i + 1; m++)
        {

            cout << " " << sum;
            sum++;
        }

        cout << endl;
    }

    return 0;
}
