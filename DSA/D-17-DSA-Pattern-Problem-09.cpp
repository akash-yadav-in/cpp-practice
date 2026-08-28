#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                   *     -- 1
                                  ***    -- 3
                                 *****   -- 5
                                *******  -- 7
                               ********* -- 9
                               ********* -- 9
                                *******  -- 7
                                 *****   -- 5
                                  ***    -- 3
                                   *     -- 1


*/
class Solution
{
public:
    void pattern9(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                cout << " ";
            }
            for (int m = 0; m < 2 * i + 1; m++)
            {
                cout << "*";
            }
            cout << endl;
        }

        //================ BELOW PART ==============
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)

            {
                cout << " ";
            }

            for (int m = 0; m < 2 * (n - i) - 1; m++)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
};




int main(){
    Solution c;
    c.pattern9(5);
    return 0;

}
