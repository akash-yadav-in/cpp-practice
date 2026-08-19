#include <iostream>
using namespace std;

void SumToN(void)
{
    int n;
    cout << "Enter The number Upto Which You want the Sum to " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;

        sum++;
    }
    cout << "The Sum of Numbers from 1 to " << n << " is: " << sum;
}

int main()
{
    SumToN();

    return 0;
}
