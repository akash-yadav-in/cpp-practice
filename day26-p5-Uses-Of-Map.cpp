#include <iostream>
#include <map>
#include <string>

using namespace std;

// MAP IS AN ASSOCIATIVE ARRAY
int main()
{
    map<string, int> marksMap;
    marksMap["Handi"] = 99;
    marksMap["Adarsh"] = 9;
    marksMap["Rohit"] = 34;

    marksMap.insert({"Mandi", 23});

    map<string, int>::iterator iter; // Here we have made iterator iter
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " = " << (*iter).second << "\n"
             << endl; // Here iter first is displaying the first variable defiened in map and that is string , and *iter.second is displaying the int
    }
    cout << "The size is: " << marksMap.size() << endl;                // *iter means iterator ke andar jo value hai wo milegi and .first is goint to be first element the is Adarsh and .second is the marks also everything in output is in ascending order will be displayed
    cout << "The max size is: " << marksMap.max_size() << endl;        // *iter means iterator ke andar jo value hai wo milegi and .first is goint to be first element the is Adarsh and .second is the marks also everything in output is in ascending order will be displayed
    cout << "The empty return value is: " << marksMap.empty() << endl; // *iter means iterator ke andar jo value hai wo milegi and .first is goint to be first element the is Adarsh and .second is the marks also everything in output is in ascending order will be displayed

    return 0;
}
