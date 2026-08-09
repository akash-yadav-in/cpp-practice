#include <iostream>
using namespace std;

template <class T> // Here we use T as custom Templete and we can use whicever varible at any place---> means main program ko bata raha hun ki kya data type usie karna hai i will tell you later like i gave yused float in int main function

class vector
{
public:
    T *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotpro(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> c(2);
    c.arr[0] = 1.66;
    c.arr[1] = 33.67;

    vector<float> d(2);
    d.arr[0] = 4.90;
    d.arr[1] = 3.56;

    float x = c.dotpro(d);
    cout << x;

    return 0;
}
