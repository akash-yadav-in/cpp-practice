#include <iostream>
using namespace std;

// POINTERS WORLD

class shopitem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "Your item id is " << id << endl;
        cout << "Your item price is " << price << endl;
    }
};

int main()
{
    // int *pointer = new int[34] -----> Here it says that ki is pointer me 34 int values ko sotre karne ke liye allocate kardo
    // Here we are making 3 items
    // 1-Vegetables
    // 2-Meat
    // 3-drinks

    int size = 2;
    shopitem *Pointer = new shopitem[size]; // Here we are making 3 objects and Pointer is sotring the size that is equal to 3

    shopitem *PointerTemp = Pointer; // We made this temp ---> so that it temproary store the address of  3 size after the first for loop ends and use it in for second for loop
                                     // If we dont use this then after writeng the value in first for loop it will give garbage value when running the second loop
    
    // 1   2   3
    //         ^
    //         |          this arrow goes from 1---->2----->3                          
    //         |
    //         |

    int p, i;
    float q;
    for (i = 0; i <= size; i++)
    {
        cout << "Enter the Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*Pointer).setData(p , q);
        // or
        Pointer->setData(p, q);
        Pointer++;
    }

    for (i = 0; i <= size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        PointerTemp->getData();
        PointerTemp++;
    }

    return 0;
}
