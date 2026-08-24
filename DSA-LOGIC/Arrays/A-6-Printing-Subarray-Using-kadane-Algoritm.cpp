#include <iostream>
#include <vector>
using namespace std;

// How can We Print all The Subarray using KADANE'S ALGORITHM

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Here we have initialize the arr of size 5

    int n = 5;
    for (int start = 0; start < n; start++) // The outermost loop is saying to start from 0 and run this loop to index less that n that is less than 5 and start++
    {
        for (int end = start; end < n; end++) // The InnerLoop is saying that that the end is int defined and is == start and if end is less than n then run the innermost loop and end++
        {
            for (int i = start; i <= end; i++) // The innermostloop is depicting tht start from i == start and run until i is lees that equal to end  i++
            {
                cout << arr[i]; // This is stating to print array at index [i] , where i start from i = 0 as that is equal to start  and end to i == end that is also equal to start so this loop first end by printing only one elemnt and that is 1
            }
            cout << " "; // Then this creates the space between them
        }
        cout << endl; // And this stated that when all the subarrays are printed of index (0) then end of line and then again print for index [1];
    }

    return 0;
}
