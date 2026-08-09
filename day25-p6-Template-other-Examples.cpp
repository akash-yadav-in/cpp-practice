#include <iostream>
using namespace std;

/*
       We will see class template with muptiple parameters

       <---------------- ITS SYNTAX --------------->

       template<class T1, class T2>
       class name_of_class{
       //body
       }



*/

template <class T1, class T2, class T3> // Here we have made the template For T1, AND T2 CAN TAKE ANY VARIABLES LINKE INT, CHAR

class myclass
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

    myclass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    };

    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3 << endl;
    }
};

int main()
{

    // DOWN BELOW IN myclass here we have definde that T1 SHOULD be Int and T2 should be float
    myclass<int, float, char> obj(22, 22.33, 'c');

    obj.display();

    return 0;
}
