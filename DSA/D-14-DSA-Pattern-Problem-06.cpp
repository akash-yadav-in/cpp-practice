/*
*************** What to achive in this pattern ********************
                            12345
                            1234
                            123
                            12
                            1
*/
class Solution
{
public:
    void pattern6(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < (n+1) - i ; j++)
            {
                cout<<j;
            }
            cout << endl;
        }
    }
};

