#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                     
                             ****
                             ****
                             ****
                             ****

*/

class Solution {
public:
    void pattern1(int n) {
         for (int i = 0; i < n; i++)
        {

            for (int i = 0; i < n; i++)
            {
                cout << "*";
            }
            cout << endl;
          }
        
        }
    };

int main(){
    Solution c;
    c.pattern1(4);
    return 0;

}
