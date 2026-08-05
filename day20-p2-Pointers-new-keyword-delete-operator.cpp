#include <iostream>
using namespace std;

// Revisiting Pointers----> a variable like int , float  it store the address

int main()
{
    // Basic Examples of Poniters

    int a = 4;
    int *store = &a; // &a is address of a in memory
                     // Here store is storing the address of a

    // cout<<"The Value of a is "<<a<<endl;  or it can be wrriten in the below format also

    cout << "The Value of a is " << *(store) << endl; // Here we have written------>  *(store) this is callled is derefrence of ptr means that we are extracting the value of a from its address

    cout << "The Address of a is " << &a << endl;

    // what is "New" Keyword

    int *p = new int(44);
    float *z = new float(89.87);
    cout << "The value of at p is " << *(p) << endl;
    cout << "The value of at z is " << *(z) << endl;

    // If We want to allocate a block of  memory to store something.

    int *arr = new int[3];
    arr[0] = 2;
    
    *(arr+1) = 3; // This arr[1] can also be wriiten like this
                  // Here we have written that *arr jo address store kar raha hai + 1 uski value 3 store karlo

    arr[2] = 34;

    // Use of "Delete" Operator  (it can be both operator and keyword)

    // delete arr; ----> This also uses of delete
    // delete[] arr; This deletes the dynamically allocated arrays

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
