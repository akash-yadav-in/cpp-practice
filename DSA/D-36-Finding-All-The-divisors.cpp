#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    vector<int> divisors(int n)
    {
        vector<int> vec;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                vec.push_back(i); // Through this we are storing every divisior in this case of 6 in a vector name vec by using the push.back function
            }
            
            
           sort(vec.begin() , vec.end());  // here we have used a sorting algorithm to sort the vector in increasing order
            
        }
        for(int value : vec){  // This is importanat that this way we can return a vec.

            return vec;
        }
      
        
    
    }
    
};

int main()
{
 Solution c;
 c.divisors(6);

    return 0;
}
