#include <iostream>
#include <climits>
using namespace std;
int smallest = INT_MAX;
int largest = INT_MIN;

void Swap_Max_MIN_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "Initially Largest value was " << largest << endl;
    cout << "Initially Smallest value was " << smallest << endl;
    swap(largest, smallest);
}

int main()
{

    int arr[] = {1, 4, 200, -6};
    int size = 4;
    Swap_Max_MIN_Array(arr, size);
    cout << "After Swapping Largest value is " << largest << endl
         << "After Swapping smallest value is " << smallest;

    return 0;
}
