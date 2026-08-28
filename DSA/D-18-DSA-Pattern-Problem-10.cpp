#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                   * -- 1
                                   ** -- 2
                                   *** -- 3
                                   **** -- 4
                                   ***** -- 5
                                   **** -- 6
                                   *** -- 7
                                   ** -- 8
                                   * -- 9


*/
class Solution {
public:
    void pattern10(int n) {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <i+1 ; j++)
            {
                cout<<"*";
            }                      
            cout<<endl;
            
        }
        for (int i = 1; i < n; i++)
        {
            for (int m = n-i; m > 0 ; m--)
            {
                cout<<"*";
            }
            cout<<endl;
            
        }      
        
    }
};

int main(){
    Solution c;
    c.pattern10(5);
    return 0;

}
