#include <iostream>
#include <vector>
using namespace std;
// Time Complexity is O(n)
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (target == nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 3, -1, 9, 12};

    Solution c;
    cout << c.search(nums, 0);

    return 0;
}
