#include <iostream>
using namespace std;
class Solution
{
public:
    int NnumbersSum(int N)
    {
        if (N == 1) // NOW THIS IS CALLED AS THE BASE CASE UPTO WHICH OUR RECURSION IS GOING TO WORK FOR
        {

            return 1;
        }

        return N + NnumbersSum(N - 1);
    }
};

int main()
{
    Solution c;

    c.NnumbersSum(4);
    cout << c.NnumbersSum(4) << endl;

    return 0;
}
