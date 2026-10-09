#include <iostream>
#include <vector>
using namespace std;

/*
-------------------------- What to achieve --------------------------
so we have been given an array of like arr = {1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7}
these element in the array are the height of the bars of contianer we have to find that which 2 height can store max water

using concept base*height that is the area of the water and we have to find the max area

It has time complexitly of O(n^2)

*/

class Solution
{
public:
    int max_water(vector<int> &arr)
    {

        int max_water = 0;

        for (int i = arr[0]; i < arr.size(); i++)
        {

            for (int j = i + 1; j < arr.size(); j++)
            {
                int width = (j - i);
                int height = min(arr[i], arr[j]);

                int area = width * height;

                max_water = max(max_water, area);
            }
        }
        return max_water;
    }
};

int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution c;

    cout << c.max_water(arr);

    return 0;
}
