#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
                                    A     -- 1
                                   ABA    -- 2
                                  ABCBA   -- 3
                                 ABCDCBA  -- 4
                                ABCDEDCBA -- 5


*********  IMPORTANT QUESTION TO LEARN FROM **************

*/
class Solution
{
public:
    void pattern17(int n)
    {

        for (int i = 0; i < n; i++)
        {
            int breakpoint = (2 * i + 1) / 2; // Here we have defined a point so that for reverse effect we can actually tell it to x++ and x-- after it reached the middle point
            char x = 'A';

            for (int m = 0; m < n - i + 1; m++)
            {
                cout << " ";
            }
            for (int s = 0; s < 2 * i + 1; s++)
            {
                cout << x;

                if (s < breakpoint) // It say that if jab tak s middle value se pehle hai to increment karo taki A se B aur B se C and so on Print hote jaye
                {
                    x++;
                }
                else           // But is s is more than that vaue breakpoint then tum decreemt kardo takki B---> C AND C-----> A ho jaye and reverse effect dikhe
                {
                    x--;
                }
            }

            cout << endl;
        }
    }
};

int main()
{
    Solution c;
    c.pattern17(5);
    return 0;
}

