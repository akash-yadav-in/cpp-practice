#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPerfect(int n)
    {
        int factors = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                factors = factors + i;
            }
        }
        if (factors == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Solution c;
    cout << c.isPerfect(4) << endl;

    return 0;
}
