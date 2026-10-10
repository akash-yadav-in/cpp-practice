#include <iostream>
#include <vector>
using namespace std;
/*

-------- What to Achive 
We have to find the target nuumber in the array Using linear search 

Time complexity -----> O(n)



*/

class Solution
{
public:
    int linearSearch(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
                break;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {2, 3, 4, 5, 3};
    Solution c;
    cout << c.linearSearch(nums, 6);

    return 0;
}
