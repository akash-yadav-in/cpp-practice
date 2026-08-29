#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                  1        1    -- 1   -GAP--- 8
                                  12      21    -- 2   -GAP--- 6 
                                  123    321    -- 3   -GAP--- 4 
                                  1234  4321    -- 4   -GAP--- 2
                                  1234554321    -- 5   -GAP--- 0



*/
class Solution
{
public:
    void pattern12(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << j + 1;
            }
            for (int k = 0; k < 2 * (n - (i + 1)); k++)
            {
                cout << " ";
            }
            for (int j = i + 1; j > 0; j--)
            {

                cout << j;
            }

            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern12(5);
    return 0;
}

