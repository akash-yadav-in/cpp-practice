#include <iostream>
using namespace std;

int main()
{
    int power = 1;
    int n;
    int sum = 0;
    cin >> n;
    int remainder;
    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        sum += remainder * power;
        power *= 2;
    }
    cout << "The Decimal number is " << sum;

    return 0;
}
