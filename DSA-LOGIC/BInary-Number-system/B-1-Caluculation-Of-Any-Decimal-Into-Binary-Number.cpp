#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int remainder; // This is for getting the remainder
    int ans = 0;   //  This Initializes the sum
    int power = 1; // This one Helps to get increse the power of 10 so that it can be added and can form a number like tens place, then hundres , then thousand etc

    while (n > 0)
    {

        remainder = n % 2; // From this one we get the last digit

        n = n / 2;                // From this we get the remaning digit and update the value of n
        ans += remainder * power; // ans is saying that do the calculation of remainder *power and add them avery thime you run the loop like ones_digit*10 + tens_digit*100 + hundred_digit*1000.... and so on
        power *= 10;              // Here we are stating to increase the power from 1 -----> 10------>100------->1000;
    }
    cout << ans;

    return 0;
}
