#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int largestDigit(int n)
    {
        int largest_digit = INT_MIN;
        int p;

        
        if (n > 0)
        {
            while (n > 0)
         {
            p = n % 10;
            if (p >= largest_digit)
            {
                largest_digit = p;
            }

            n = n / 10;
          }
         return largest_digit;
        }
        else
        {
            return -1;
        }

        

        
    }
};

int main()
{
    Solution c;
    cout << c.largestDigit(1992) << endl;

    return 0;
}
