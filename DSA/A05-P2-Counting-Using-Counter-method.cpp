#include <iostream>
using namespace std;

class Solution
{
public:
    int countDigit(int n)
    {
        int count = 0;
        while (n > 0)
        {
            count = count + 1;

            n = n / 10;
        }
        cout << count;
    }
};

int main()
{

    Solution c;
    c.countDigit(1111);
}
