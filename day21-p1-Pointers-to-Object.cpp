#include <iostream>
using namespace std;

// WE Studied Pointers To Objects in this lecture

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {

        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    // Easy example
    Complex s;

    // Pointer part

    // Here we have made a pointer p Jisko we have pointed to s

    // We are checking ek pointer se object ke Public memeber ko kaise access kar sakte hain
    // Complex *p = &s;

    // another way also below

    Complex *p = new Complex;  // This syntax used here can make new Objects

    // Complex *p = new Complex[4]; ----> And this one make 4 new objects


   

    // Here we have derefrenced it
    (*p).setData(2, 3);

    (*p).getData();

    // or

    p->setData(22, 33); // meaninig of -> derefrence the pointer and run that setdate or whichever function present after that arrow

    p->getData();

    return 0;
}
