#include <iostream>
using namespace std;

int main()
{
    int a = 4; // WE  are actuall comaparing 0100 of 4
    int b = 8; // and 1000 of 8

    cout << "AND-->" << (a & b) << endl; // Bitwise AND(&)

    cout << "OR-->" << (a | b) << endl;  // Bitwise OR(||)
    cout << "XOR-->" << (a ^ b) << endl; // Bitwise XOR(^) here if same bit then the answer is ---> 0  and if other like one is 0 and another is 1 then it is 1

    // Here in OR AND XOR YOU GET 12 that means that those operator result in binary of 12

    /******************************************************************************************** */

    cout << "LEFT_SHIFT-->" << (a << 2) << endl;  // Here a<<2 is a Left shift operatior that means the every binary of y will shift to i which is 2 here to left and result in another binary
    cout << "RIGHT_SHIFT-->" << (a >> 2) << endl; // Here a<<2 is a Right shift operatior that means the every binary of y will shift to i which is 2 here to left and result in another binary

    return 0;
}
