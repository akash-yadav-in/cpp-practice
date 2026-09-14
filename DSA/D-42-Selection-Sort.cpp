#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)

    {

        sort(nums.begin(), nums.end());  // Here we have sorted the array
        for (int value : nums) // Here we have return the sorted or the ascending ordered vector
        {
            return nums;
        }
    }
};

int main()
{
    vector<int> nums = {7, 4, 1, 5, 3};
    Solution c;
    c.selectionSort(nums);

    return 0;
}
