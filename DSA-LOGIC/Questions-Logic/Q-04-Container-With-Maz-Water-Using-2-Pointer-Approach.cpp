#include <iostream>
#include <vector>
using namespace std;

/*
-------------------------- What to achieve --------------------------
so we have been given an array of like arr = {1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7}
Here we will use 2 pointer Approach it has Time complexity = O(n)


*/

class Solution
{
public:
    int max_water(vector<int> &arr)
    {
        int n = arr.size();
        int left = 0;
        int right = n - 1;
        int stored = 0;
        while (left < right)
        {
            int width = right - left;
            int height = min(arr[left], arr[right]);
            int area = width * height;
            stored = max(stored, area);
            if (arr[left] < arr[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return stored;
    }
};

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution c;

    cout << c.max_water(arr);

    return 0;
}
