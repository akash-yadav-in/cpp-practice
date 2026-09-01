#include <iostream>
using namespace std;
/*

-----------  WHAT TO ACHIEVE -----------

Here, Say we have given and integer 153 so what is armstrong number it is that number whose digit's cube when added result into that original number again is armstrong number

so here we take cub of 1 , 5 , 3  and all the result of cube of 1 , 5 , 3 and if it result in 153 then it is armstrong



*/

class Solution
{
public:
    bool isArmstrong(int n)
    {
        int orginal_n = n;
        int s = 0;
        int cubsesum = 0;
        int finalsum = 0;
        while (n > 0)
        {
            s = n % 10;

            cubsesum = s * s * s;
            finalsum = finalsum + cubsesum;

            n = n / 10;
        }
        if (finalsum == orginal_n)
        {
            cout << true;
        }
        else
        {
            cout << false;
        }
    }
};

int main()
{
    Solution c;
    c.isArmstrong(37);

    return 0;
}
