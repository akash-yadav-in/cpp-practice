#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size() - 1;
        int largest_number = nums[size];

        for (int i = size; i >= 0; i--)
        {
            if (i == 0)
            {
                if (nums[i + 1] == nums[i])
                {
                    return -1;
                }
            }
            else if (nums[i] != nums[i - 1])
            {

                largest_number = nums[i - 1];
                
                break;
            }
        }
        return largest_number;
    }
};
int main()
{
    vector<int> nums = {8 ,  8, 7 ,6 , 5};
    Solution c;
    c.secondLargestElement(nums);

    return 0;
}
