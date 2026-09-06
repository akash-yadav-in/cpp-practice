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

    int ans = arr[0]; // Initially we have defined int ans = value at arr[0].

    int frequency = 1; // and defined frequency = 1.

    for (int i = 1; i < arr.size(); i++) // this outer loop is running from 1 to last element of arr
    {

        if (arr[i] == arr[i - 1]) // this if condition is checking whether value at arr[i] == value at arr[i-1] means that is the next value equals to its previous value or not
        {
            frequency++;          // if yes then frequency ko +1 se inc kar do 
        }
        else
        {
            frequency = 1;      // else frequncy ko reset to 1 kardo and ans ko reset karke jis i index per arr[i] li value hai wo kardo
            ans = arr[i];
        }

        if (frequency > arr.size() / 2)   // this one is for checking ki agar frequncy ki value half se jayada hua than it will defenitely be a majoritly elemnent
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
