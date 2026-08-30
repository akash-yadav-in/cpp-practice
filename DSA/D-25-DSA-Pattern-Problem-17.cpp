#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                A -- 1
                                B B -- 2
                                C C C -- 3
                                D D D D -- 4



*/
class Solution
{
public:
    void pattern16(int n)
    {
        char x = 'A';

        for (int i = 0; i < n; i++)
        {

            for (int m = 0; m < i + 1; m++)
            {

                cout << x;
            }
            x++;

            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern16(5);
    return 0;
}

