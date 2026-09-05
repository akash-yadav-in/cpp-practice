#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
  -------- What to Achieve ------
  Here we are using the sorting apprach to achieve the majority Element
  1- first we will organise all elements in increasing order
  2- then we will use that frequency to check which is majority element

*/

void Majority_Optimised_Approach(vector<int> &arr)
{
    // First step is to sort the Array
    // For this we can use Inbuilt Sorting Algorithm

    sort(arr.begin(), arr.end()); // This can be used to sort the arr starting from vec.begin() ,  to vec.end()   ------> this will sort it in ascending order

    // ----> Now counting Frequency

    int ans = arr[0];

    int frequency = 1;

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] == arr[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans = arr[i];
        }

        if (frequency > arr.size() / 2)
        {
            cout << ans;
        }
    }
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    Majority_Optimised_Approach(arr);

    return 0;
}
