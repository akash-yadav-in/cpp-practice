#include <iostream>
using namespace std;

// Single Inheritance Deep

class Base
{
    int data1; // Private by defualt if not declared public---- and not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 45;
    data2 = 33;
}
int Base ::getData1()
{
    // cout<<"The value of Data 1 is "<<data1<<endl; -----> one way to Do this
    return data1; // Another way to do it but the difference it that this one does not print the value of data 1
}

int Base ::getData2(void)
{
    // cout<<"The value of Data 2 is "<<data2<<endl;
    return data2;
}

class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};
void Derived ::process(void)
{
    data3 = data2 * getData1();
}

void Derived ::display(void)
{
    cout << "The value of data 1 is " << getData1() << endl; // Since Data 1 is private but we can obtained data1 from getdata1 function and that function can be inherited in the derived class as that is presnt in public
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

// Important thing to note that Whenever we whant data 1 we are calling the getdata functiion rathe than data1 

int main()
{
    Derived m;
    m.setData();
    m.getData1();
    m.getData2();
    m.process();
    m.display();

    return 0;
}
