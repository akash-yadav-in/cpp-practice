#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                          ********* -- 9
                           *******  -- 7
                            *****   -- 5
                             ***    -- 3
                              *     -- 1

*/
class Solution
{
public:
    void pattern8(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int m = 0; m < 2 *(n-i) - 1; m++)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
};



int main(){
    Solution c;
    c.pattern8(5);
    return 0;

}
