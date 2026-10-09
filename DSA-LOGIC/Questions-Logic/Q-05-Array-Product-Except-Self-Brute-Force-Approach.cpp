#include <iostream>
#include <vector>
using namespace std;
/*

----- Here we are finding thr product of Except self

1 ----> BRUTE FORCE APPROACH

2 ----> No DIVISION Allowed

3 ----> Time Complexity Is O(n^2)



*/

class Solution
{
public:
    vector<int> array_product(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> store = {};

        for (int i = 0; i < n; i++)
        {
            int array_product = 1;

            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    array_product *= arr[j];
                }
            }
            store.push_back(array_product);
        }
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Solution c;

    c.array_product(arr);

    return 0;
}
