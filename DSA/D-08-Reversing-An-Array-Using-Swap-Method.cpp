#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverse(vector<int> &arr)  // Here we are taking the array in form of refrence that it we are taking the original elemts of the array and modifing it afterwards
    {
        int size = arr.size(); // here we are intializig the size of the array
        int start = 0;  // Intializing start 0 here
        int end = size - 1; // Intializing end should be size -1 that is if size = 5 then end is 4 and from 0 to 5 there are total 5 elements
        while (start < end)  // Here we have defind the logic that when starting from start it goes to next and then next until it is lesser than end the moment it goes bigger than end stop the loop
        {
            swap(arr[start], arr[end]);  // Here we are tell it to swap the first array value with the end value of that array
            start++;
            end--;
        }
    }
};

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    Solution c;
    c.reverse(arr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}
