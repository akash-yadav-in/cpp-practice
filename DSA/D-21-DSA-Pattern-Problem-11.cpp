#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                 1               -- 1
                                 2 3             -- 2
                                 4 5 6           -- 3
                                 7 8 9 10        -- 4
                                 11 12 13 14 15  -- 5




*/
class Solution
{
public:
    void pattern13(int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                sum += 1;
                cout << sum;
                cout << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern13(5);
    return 0;
}

