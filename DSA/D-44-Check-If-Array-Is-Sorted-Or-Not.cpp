#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isSorted(vector<int> &nums)
    {

        bool isSort = true;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {

                isSort = false;

                break;
            }
        }
        return isSort;
    }
};
int main()
{
    Solution c;
    vector<int> nums = {1, 2, 1, 4, 5};
    c.isSorted(nums);

    return 0;
}
