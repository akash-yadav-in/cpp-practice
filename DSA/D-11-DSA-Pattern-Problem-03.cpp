#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                             1
                             12
                             123
                             1234
*/
class Solution
{
public:
    void pattern3(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= i + 1; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
};





int main(){
    Solution c;
    c.pattern3(4);
    return 0;

}
