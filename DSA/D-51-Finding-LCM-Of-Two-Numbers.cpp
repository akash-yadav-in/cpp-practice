#include <iostream>
using namespace std;
class Solution
{
public:
    int LCM(int n1, int n2)
    {
        int output;
        int Greatest_divisior = 0;
        if (n1 == n2)
        {
            return n1;
        }

        if (n1 != n2)
        {

            for (int i = 1; i < n2; i++)
            {
                if (n1 % i == 0 && n2 % i == 0)
                {
                    Greatest_divisior = i;
                }
            }

            output = (n1 * n2) / Greatest_divisior;
            return output;
        }
    }
};

int main()
{
    Solution c;
    c.LCM(1000, 1);

    return 0;
}
