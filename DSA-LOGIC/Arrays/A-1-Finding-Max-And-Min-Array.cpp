#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "*************** FINDING LARGEST AND SMALLEST ARRAY*************" << endl
         << endl
         << endl;

    cout << "*************** FINDING SMALLEST ARRAY*************" << endl;
    int marks[5] = {12, -100, 4, -12, 2000};

    int largest = INT_MIN;  // This here denote the smallest possible value that is INT_MIN is -infinity
    int smallest = INT_MAX; // This here denote the largest possible value that is INT_MAX is + infinity

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }

        if (marks[i] > largest)
        {
            largest = marks[i];
        }
    }

    cout << "The smallest value is --> " << smallest << endl
         << endl;

    cout << "*************** FINDING LARGEST ARRAY*************" << endl;
    cout << "The largest value is --> " << largest << endl;

    cout << "Other Way of finding Max and Min array using max and min " << endl;

    // For max
    for (int i = 0; i < 5; i++)
    {
        largest = max(marks[i], largest);
        smallest = min(marks[i], smallest);
    }
    cout << "Largest--> " << largest << endl;
    cout << "smallest--> " << smallest << endl;

    return 0;
}
