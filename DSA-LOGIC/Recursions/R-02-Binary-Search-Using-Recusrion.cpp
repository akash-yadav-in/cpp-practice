#include <iostream>
#include <vector>

using namespace std;
/*
------------- What to achieve ------------
so here we will be given an array and we have to find the target number in that arr and tell whether it exist in that array or not

------ Approach
  here we are going to play it with mid game like we will find the middle of the array and search for where the target exist in left or right ans then we will make  the recursive call
 IMPORTANT NOTE THAT WHILE USING THIS METHOD THE ARRAY MUST BE SORTED OR IN ASCENDING ORDER

*/

int binary_Recursion(vector<int> arr, int p, int start, int end)
{
    int target = 9; // this is the target we are searching for inside the array

    int middle = (start + end) / 2; // Here we have defined middle that is start + end /2

    if (start <= end)  // This is the most important on to check when to stop the recusrion so run the recussion only when the start is  < = end
                      // as in last when start and end both will be at the some number and if that number if not the target the start will inc and the end will dec making it look like that start  > end and hence there is no target present in this array and hence return -1
    {

        if (arr[middle] == target) // now jab hum middle mein hain tab check kar rahe hain ki if middle hi target ke equal hai then return middle directly
        {
            return middle;
        }
        if (arr[middle] <= target) // if middle jo hai wo target se chota ya equal hai then  middle chota hai means target bade index per hai then will will change the start and start it from middle +1
        {
            start = middle + 1;
            return binary_Recursion(arr, p, start, end);
        }
        if (arr[middle] >= target) // if middle jo hai wo target se bada qual hai then  middle bada hai means target chote index per hai then will change the end and start it from middle -1
        {
            end = middle - 1;
            return binary_Recursion(arr, p, start, end);
        }
    }
    return -1;
     
}

int main()
{
    vector<int> arr = {1, 3, 5, 9, 11};
    int n = arr.size() - 1;
    int c = arr[0];
    int d = arr[n];
    binary_Recursion(arr, n, c, d);
    cout << binary_Recursion(arr, n, c, d) << endl;

    return 0;
}
