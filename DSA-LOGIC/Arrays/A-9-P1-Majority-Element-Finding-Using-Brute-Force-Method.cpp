#include <iostream>
#include <vector>
/*
          ------------ WHAT TO ACHIEVE ------------
    So if we are Gievn any array say arr = {1 , 2, 2, 1, 1}
    and we need to find he max occuring element or Majority element

    1--- Here we have done it using the BRUTE FORCE APPROACH BUT THIS IS NOT BEST As Time Complexity here is O(n^2)
    

*/
using namespace std;
int Majority_Element(vector<int> arr)
{
    int size = 5;
    for (int value : arr)
    {                      // Here we told the loop for every value of arr you give that element as output --- using this value loop
        int frequency = 0; // Here we have intialised a frequency to check how many times a number appears
        for (int elements : arr)
        { // Main logic here elements is acting same as that of value as of upper loop examples that when the loop run when the value loop runs for first time it will
          // it will give output as the first element of arr that is 1 from value loop the the element loop run from 1 to last elemt of arr and whenever value == element hoga then it will inc frequncy by 1

            if (elements == value)
            {
                frequency++;
                
            }
        }
        if (frequency > size / 2) // Here agar kisi number ki frequncy total jitne number hain uske addhe se jyada aati hai then wo majority number alredy ho jayega
        {
            cout << value;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1};
    Majority_Element(arr);

    return 0;
}
