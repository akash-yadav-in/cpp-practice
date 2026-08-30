#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                 ABCDE -- 1
                                 ABCD -- 2
                                 ABC -- 3
                                 AB -- 4
                                 A -- 5


*/
class Solution
{
public:
    void pattern15(int n)
    {

        for (int i = 0; i < n; i++)
        {
            char x = 'A';
            for (int m = n-i; m >0; m--)
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
    c.pattern15(5);
    return 0;
}
