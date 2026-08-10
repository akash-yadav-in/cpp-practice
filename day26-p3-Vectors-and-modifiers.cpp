#include <iostream>
#include <vector>
using namespace std;

// WE WILL COVER VECTOR IN STL AND CODING IN STL

template <class T>
void display(vector<T> &v)
{ // Here vector<int> is acting as a data type

    cout << "Displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    //  ---------------WAYS TO CREATE A VECTOR ------------------>

    vector<int> vec1; // THIS IS A ZERO LENGTH INT VECTOR <----> here we have made a vector and main feature of it is that it automatically manages the size as compared to an array

    int size = 3;
    // cout << "Enter the size of Vector " << endl;
    // cin >> size;
    for (int i = 0; i < size; i++)
    {
        int element;
        cout << "Enter an element to add to this vector" << endl;
        cin >> element;
        vec1.push_back(element); // Push_back method That is add element at the end
    }

    vec1.pop_back(); // It means take out the end element

    display(vec1);

    //  Below we have used insert modifier and iterator to insert 56 in starting
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter, 56);
    display(vec1);

    // If we want to insert it at last
    vector<int>::iterator m = vec1.begin();
    vec1.insert(m + size + 1, 1000, 78);

    display(vec1);

    // --------------- BELOW WE HAVE MADE DIFFEENCT VECTORS ---------

    // vector<char>vec2(3);// THIS IS 3 ELEMNT CHARCTER VECTOR
    // vector<char>vec3(vec2); // THIS IS A 3 ELEMENT VEC 3 VECTOR MADE FROM VEC2 VECTOR
    vector<int> v(6, 2);
    display(vec1);
    // display(vec2);
    // display(vec3);

    display(v);

    return 0;
}
