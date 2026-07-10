#include <iostream>
using namespace std;
class Point
{
    int a, b;

public:
    Point(int x, int y) // We made a Parameterised constructor
    {
        a = x;
        b = y;
    }
    void display(void)
    {
        cout << "The Point is " << a << " , " << b << endl;
    }
};

int main()
{
    Point p(2, 3);
    Point m(3, 4);
    p.display();
    m.display();

    return 0;
}
