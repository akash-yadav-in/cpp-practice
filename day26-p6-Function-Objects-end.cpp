#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

// Function Objects : function wrapped in a class so that
//                    it is available like an object

int main()
{

    int arr[] = {1, 23, 0, 44, 3, 56};  // It is also arranged in ascending order in final output
    sort(arr, arr + 5, greater<int>()); // Here when we wrote greater it sorted it in descending orger otherwise default ascending oerder it will sort
    for (int i = 0; i < 6; i++)         // WE HAVE USED A FUNCTION OBJECTE GREATER
    {
        cout << "The values of " << i << " is " << arr[i] << endl;
    }

    return 0;
}
