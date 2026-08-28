#include<iostream>
using namespace std;
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

int main(){
    Solution c;
    c.pattern5(5);
    return 0;

}
