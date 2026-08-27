/*
*************** What to achive in this pattern ********************
                             *****
                             ****
                             ***
                             **
                             *
*/
class Solution
{
public:
    void pattern5(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n; j >i; j--)
            {
                cout<<"*";
            }
            cout << endl;
        }
    }
};

