#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                  1
                                  0 1
                                  1 0 1
                                  0 1 0 1
                                  1 0 1 0 1


*/
class Solution
{
public:
    void pattern11(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (i % 2 == 0) // 1st if
                {

                    if (j % 2 == 0)
                    {
                        cout << "1";
                        cout << " ";
                    }

                    if (j % 2 != 0)
                    {
                        cout << "0";
                        cout << " ";
                    }
                }

                if (i % 2 != 0) // 2nd if
                {
                    if (j % 2 == 0)
                    {

                        cout << "0";
                        cout << " ";
                        cout << "1";
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern11(5);
    return 0;
}

