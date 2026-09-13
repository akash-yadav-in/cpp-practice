#include <iostream>
using namespace std;
class Solution
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }

        
        return   n*factorial(n - 1);
    }
};

int main()
{
    Solution c;
    c.factorial(4);

    return 0;
}
