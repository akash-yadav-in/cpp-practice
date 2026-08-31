#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
         

                       * * * *  - 4
                       *     *  - 2     // PRINT THE SQUARE AND ITS NOT RECTANGLE
                       *     *  - 2
                       * * * *  - 4

                             
 
*/
class Solution
{
public:
    void pattern21(int n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == (n - 1))  // This is the main logic for printing the stars where it says that print  the start if i==0 start of boundary and i==n-1 which is the last line also print at j==1 vertical first line and j==n-1 vertiacllly last line
                {
                    cout << "*";
                }
                else   // Other than that print the spaces
                {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern21(4);
    return 0;
}

