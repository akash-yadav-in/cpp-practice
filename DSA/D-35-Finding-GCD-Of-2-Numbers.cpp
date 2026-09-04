
#include <iostream>
using namespace std;
/*

----------- WHAT TO ACHIEVE --------------
 HERE WE WANT TO ACHIEVE THAT IF WE INPUT 2 NUMBERS THEN WE HAVE TO FIND THE GREATEST DIVISIOR WHICH CAN DIVIDE THE BOTH NUMBER
 HERE THE CODE WE HAVE WRITTEN HAS TIME COMPLEXITY O(n)


*/

class Solution
{
public:
    void GCD(int n1, int n2)
    {
        int gcd = 0;
        for (int i = 1; i <= max(n1, n2); i++)
        {

            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
            }
        }
        cout << gcd;
    }
};

int main()
{
    Solution c;
    c.GCD(9, 8);

    return 0;
}
