#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                    E        
                                    D E      
                                    C D E    
                                    B C D E  
                                    A B C D E  

        *---------   IMPORTANT PATTERN --------*
                           




*/
class Solution
{
public:
    void pattern18(int n)
    {

        for (int i = 0; i < n; i++)
        {
            char p = int (65 + (n-1));

            for (char ch = p - i; ch <= p ; ch++)  // So here we have started from ch = E-i since in starting i == 0 and hence E will be printed after that
            {                                        // in the next loop run ch will intialize from D as E-i will be E-1 and hence it will start from D and print upto E
                cout << ch << " ";              
            }

            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern18(5);
    return 0;
}

