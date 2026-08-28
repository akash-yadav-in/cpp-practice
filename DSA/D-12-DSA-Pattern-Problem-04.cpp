#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                             1
                             22
                             333
                             4444
*/
class Solution
{
public:
    void pattern4(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                cout<<i+1;
            }
            cout << endl;
        }
    }
};

int main(){
    Solution c;
    c.pattern4(4);
    return 0;

}
