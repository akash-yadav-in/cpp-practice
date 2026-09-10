#include <iostream>

using namespace std;

/*
----------- What to Achieve ------------
So we have to calculate the value of x^n using binary exponentiation what is the main logic here is that
we will use loop on the binary numbers of that digits rather than using the loop on the digit itself

example if we have to calculate 3^5 we find first the binary form of 5 that is 101 now we go like this
   1      0      1  ---- we will use this loop
  x^3    x^2    x^1    and we will find update the value only for 1 and neglect for  0
*/

void number_power(int x, int n)
{ // Here we have taken the number whose poer is to be calculated here in this case is 3 and that is stored in int x , second thing we have store ki kitne tak power calculate in int n that is 10 here
    int binform = n;
    int ans = 1; // this is the mainframework that is and and we have defined it for ans =1;

    if (binform < 0)
    {
        x = 1 / x;
        binform = -binform;
    }
    else
    {
        while (binform > 0) // here we told that program that run the loop until and unless binform is > 0
        {
            if (binform % 2 == 1) // here we are checking that if binform % 2 meaninig the last digit if it is ==1 then do the below operation 
                                 // we have made percent of 2 as we are comparing the reminder like when 10 % 2 remiander is 0 != 1
                                 // but in case of when 10/2 happened then in the next time the code runs and 5 %2  will give a remiander  = 1 ---> like this it happens
            {
                ans *= x; // this is the operation we have perform that is we have to update the ans = ans*x; ----> that is since in starting
            }
            x *= x;
            binform /= 2;
        }
        cout << ans;
    }
}

int main()
{
    number_power(2, 10);

    return 0;
}
