
#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                             **********
                             ****  ****
                             ***    ***
                             **      **
                             *        *
                             *        *
                             **      **
                             ***    ***
                             ****  ****
                             **********  
 
*/
class Solution
{
public:
    void pattern19(int n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i ; j++)
            {
                cout<<"*";
            }
            for (int k = 0; k < 2*i ; k++)
            {
                cout<<" ";
            }
            for (int u = n - i; u > 0  ; u--)
            {
                cout<<"*";
            }
         
            cout<<endl;

        }

    // ****** BELOW PART *********

        for (int i = 0; i < n; i++)
        {
              for (int y = 0; y < i + 1 ; y++)
             {
            cout<<"*";
             }
              for (int y = 2*(n-1) - 2*i; y > 0  ; y--)
             {
            cout<<" ";
             }
             for (int y = i+1; y > 0  ; y--)
             {
            cout<<"*";
             }
             cout<<endl;
        }
       
         
           
    }
};

int main()
{
    Solution c;
    c.pattern19(5);
    return 0;
}

