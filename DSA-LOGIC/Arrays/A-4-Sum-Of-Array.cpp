#include <iostream>
using namespace std;
int sum = 0;
void SumOfArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
}

int main()
{

    int arr[] = {1, 4, 200, 6};
    int size = 4;
    SumOfArray(arr, size);
    cout << sum;

    return 0;
}
