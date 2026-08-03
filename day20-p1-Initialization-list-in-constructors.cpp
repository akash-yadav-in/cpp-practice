#include <iostream>
using namespace std;

// Initialization list in constructors ::
/*
Syntax for Initializtion list in constructors  used when constructor body is complex
   constructors (argument-list) : intializtion-section
{
   assignment + other code;

}
   ------------ EXAMPLE BELOW -------------

class test{
int a;
int b;

public:
   test(int i , int j) : a(i) , b(j)
              or
   test(int i , int j) : a(i) , b(i+j) -----> this will also run
   {
     constructor-body
   };

}




*/

class marks
{
    int a, b;

public:
    // marks(int i , int j) : a(i) , b(j) -- this will run
    // marks(int i , int j) : a(i) , b(a+j) -- this will run
    // marks(int i , int j) : a(i) , b(i+j) -- this will run
    // marks(int i , int j) : a(i) , b(2*j) -- this will run
    // marks(int i, int j) : b(j), a(i + b) // --- This will give garbage value as we have declared a then b as a will intialize first
    
    marks(int i , int j) : a(i)

    {
        b = j; // we can also write it inside
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    };
};

int main()
{
    marks z(2, 5);

    return 0;
}
