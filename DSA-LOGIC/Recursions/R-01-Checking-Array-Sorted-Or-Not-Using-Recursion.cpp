#include <iostream>
#include <vector>
using namespace std;
/*
---------- What to achieve -----------
So here we have to check that wheter the array is sorted or not using recursions
*/

bool Check_sort(vector<int> arr, int n)
{
    if (n == 0 || n == 1) // Here this is the base case and the logic is that if there is a single element or there is no element in the array then this is always sorted
    {
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && Check_sort(arr, n--); // Here the way code is wrriten is also important and what is written is also
                                                             // here like first arr[n-1]  > arr[n-2] is to be checked first then chec_sort as we have used && condition and is when checking is false there is no need to do the recurstion for other elemnet
                                                             // and the second one is recrsive call for check_sort
}

int main()
{
    vector<int> arr = {1, 4, 5, 3, 2};
    int n = arr.size();
    Check_sort(arr, n-1);
    cout<<Check_sort(arr , n-1)<<endl;

    return 0;
}
