#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
         
 
                           *        *    -- 8  
                           **      **    -- 6
                           ***    ***    -- 4
                           ****  ****    -- 2
                           **********    -- 0  End Of Upper Part
                           ****  ****    -- 2
                           ***    ***    -- 4
                           **      **    -- 6
                           *        *    -- 8

                             
 
*/
class Solution
{
public:
    void pattern20(int n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int x = 0; x < i+1; x++)
            {
                cout<<"*";
            }
            for (int s = 2*(n-1) - 2*i; s > 0; s--)
            {
                cout<<" ";
            }
            for (int x = 0; x < i+1; x++)
            {
                cout<<"*";
            }

            cout<<endl;
           
        }
        for (int i = 0; i < n; i++)
        {
           for (int r = (n-1)-i; r > 0; r--)
           {
            cout<<"*";
           }
           for (int z = 2*(i+1); z > 0; z--)
           {
            cout<<" ";
           }
           for (int h = (n-1)-i; h > 0; h--)
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
    c.pattern20(5);
    return 0;
}

