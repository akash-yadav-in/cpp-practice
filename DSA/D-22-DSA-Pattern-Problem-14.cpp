#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                 A              -- 1
                                 A B            -- 2
                                 A B C          -- 3
                                 A B C D        -- 4
                                 A B C D E      -- 5

*/
class Solution
{
public:
    void pattern14(int n)
    {

        for (int i = 0; i < n; i++)
        {
            char x = 'A';
            for (int m = 0; m < i + 1; m++)
            {

                cout << x;
                x++;
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern14(5);
    return 0;
}
