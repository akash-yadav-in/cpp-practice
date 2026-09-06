#include <iostream>
#include <vector>
using namespace std;
// Majority-Element-Using  Moore's Algorithm Whose Time Complexity
// it says that if an element in an array is in majority then if the frequncy is even got decreased due to the non majority elemnt then also the majority on will be majority element

// Time complexity os O(n);
void Moore_Majority(vector<int> &arr)
{
    int n = arr.size(); // this is size or arr upto which the loop will run
    int frequency = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) // This loop will run from i=0 to i= last elemnt of arr
    {
        if (frequency == 0) //  first step to start with the element of array -----> if ever frquency is = 0  update the ans to the value with what arr [i] will have at that i
        {
            ans = arr[i]; // As majority elment ki overall intni frequncy hai ki wo elemnt will alway win and be the majority elemnt
        }
        if (ans == arr[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }

    // If a variation comes like arr={1 ,2 ,3, 4} hai then moores will retun 4 but we will check its freqncy for majority  element and for that we have to do an extra ste

    int count = 0;
    for (int vec_value : arr)
    {
        if (vec_value == ans)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << ans;
    }
    else
    {
        cout << "-1";
    }
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2};
    Moore_Majority(arr);

    return 0;
}
