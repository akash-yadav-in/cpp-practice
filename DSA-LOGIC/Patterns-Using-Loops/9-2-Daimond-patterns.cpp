#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // Main LOOP For upper PART
    for (int i = 0; i < n; i++)
    {
        // LOOP for spaces before first stars
        for (int b = i; b < n - 1; b++)
        {
            cout << " ";
        }
        // Here is star after spaces endds
        cout << "*";
        // Below is condition for start for odd [places]  and for aspces after first row of stars.
        if (i != 0)
        {
            for (int c = 0; c < 2 * i - 1; c++)
            {
                cout << " ";
            }
            // Printing of start for end side of line
            cout << "*";
        }
        cout << endl;
    }
    // Loop for Below Part

    for (int i = 0; i < n - 1; i++)
    {
        // This one is for spaces
        for (int b = 0; b < i + 1; b++)
        {
            cout << " ";
        }
        cout << "*"; // this for printing start after spaces

        if (i != n - 2) // This logic is used here  for the last single star
        {
            for (int k = 0; k < 2 * (n - i) - 5; k++) // this one is for the spaces in belowe loop after the single star has been printed
            {
                cout << " ";
            }

            cout << "*"; this one is for printing the below loop stars
        }
        cout << endl;
    }

    return 0;
}
