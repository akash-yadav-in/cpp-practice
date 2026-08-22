#include <iostream>
using namespace std;

int main()
{
    cout << "********** LINEAR SEARCH ALGORITHM ***********" << endl; // IT USES A LOOP TO SEARCH AND WHEN IT FINDS THE TARGET IT RETURN AND IT NOT FIND RETURN -1

    // say in this problem we want t find the index of 2
    int array[6] = {1, 34, 44, 42, 56, 2};

    for (int i = 0; i < 6; i++)
    {
        if (array[i] == 2)
        {
            cout << "The index of 2 is----> " << i << endl;
            return i;
        }
    }

    return 0;
}
