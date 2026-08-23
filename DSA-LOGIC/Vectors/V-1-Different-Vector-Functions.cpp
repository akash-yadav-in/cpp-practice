#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {20, 72, 1};

    cout << "Size of vector is " << vec.size() << endl; // We can use vector_name.size----> to get size of vector

    vec.push_back(29); // This Push_back will add an int in vec vector in the LAST
    cout << "Size of vector after push_back is " << vec.size() << endl;

    for (int value : vec)
    { // This Loop here is printing all the elements in the vector
        cout << value << " ";
    }
    cout << endl;

    vec.pop_back(); // This Function will delete the last elemnt by default from the vector
    cout << "Size of vector after pop_back is " << vec.size() << endl;

    cout << "The value of The first vector--> " << vec.front() << endl; // This here will print the first element of the vector

    cout << "The value of the last vector is--> " << vec.back() << endl; // This here will print the last element of the vector

    cout << "The value of vector at index 1--> " << vec.at(1) << endl; // This here will print the element of the vector at positin (2)

        return 0;
}
