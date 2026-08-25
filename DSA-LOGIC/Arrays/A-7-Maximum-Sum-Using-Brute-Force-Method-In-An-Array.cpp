#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Maximium Subarrays Sum
// Using BRUTE FORCE APPRACH with Time complexity = O(n^2)

int main()
{
    int maxsum = INT_MIN;
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    for (int st = 0; st < n; st++)
    {
        int sum = 0;
        for (int end = st; end < n; end++)
        {
            sum += arr[end];

            maxsum = max(sum, maxsum);
        }
    }
    cout << maxsum;

    return 0;
}
