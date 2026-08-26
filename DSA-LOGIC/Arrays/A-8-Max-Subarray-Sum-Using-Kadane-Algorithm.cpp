#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Maximium Subarrays Sum
// Using Kadane's algorithm with time complexity O(n)
/* *************** KADANE'S LOGIC *******************

1. is subarray sum is coming to be -ve then kadanes say to reset it to 0
2. it says we take two variable sum and max_sum (where we will store our answer)  and in current sum we will store sum during the process
3. it tell to run a single loop and we will add all the element of array one by one and if anytime the sum value is < 0 (means -ve ho jati hai) then  we will rest the value to 0
----------------->>>> as we know ki kisi small positive value mein agar bigger -ve value add hogi to overall wo -ve ho jayega to usee - ve se accha hai ke we rest that -ve to 0 and add that 0 instead of adding that -ve


*/

int main()
{
    int maxsum = INT_MIN;
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int sum = 0;
    for (int i = 0; i < n; i++) // Single Loop We have intialized
    {
        sum += arr[i]; // Here we have initialized the sum = sum + arr[i](array at index i)

        maxsum = max(sum, maxsum); // Here we have taked max sum to be -ve infinty so that any sum which is positive will automatically be biggest value from the two we are comparing
        if (sum < 0)               // This is the main logic when the loop runs for the first time the sum = 3 then when it run for i=1 then it result in sum = 3 + arr[i] == -1 and since if sum is -ve we reset it to zero so that when the next positive value occur it will less the its actual value if the -ve was not added so we are resetting the -ve to 0 so that o should add with the next positive value and result in max sum
        {
            sum = 0;
        }
    }
    cout << maxsum; // Here we have printes the max sum

    return 0;
}
