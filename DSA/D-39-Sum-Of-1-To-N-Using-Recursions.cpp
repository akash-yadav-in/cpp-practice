#include <iostream>
using namespace std;
class Solution
{
public:
    int NnumbersSum(int N, int a)
    {

        if (N > 0)
        {
            a += N;
            N--;
            return NnumbersSum(N, a);
        }
        cout << a;
    }
};

int main()
{
    Solution c;
    c.NnumbersSum(4, 0);

    return 0;
}
