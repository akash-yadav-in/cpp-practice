#include <iostream>
using namespace std;

// Multiple Inheritance Deep

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(void);
    int get_roll_number(void);
};

void Student ::set_roll_number(void)
{
    cout << "Enter Your Roll Number " << endl;
    cin >> roll_number;
}

int Student ::get_roll_number(void)
{
    return roll_number;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;
    float english;
    float hindi;

public:
    void setM(float, float);
    void setMarks(void)
    {
        cout << "Enter the marks in Maths " << endl;
        cin >> maths;
        cout << "Enter the marks in Physics " << endl;
        cin >> physics;
    }
    void getMarks(void)
    {
        cout << "The Marks Of Roll number " << roll_number << " in Maths is  " << maths << endl;
        cout << "The Marks Of Roll number " << roll_number << " in Physics is  " << physics << endl;
        cout << "The Marks Of Roll number " << roll_number << " in English is  " << english << endl;
        cout << "The Marks Of Roll number " << roll_number << " in Hindi is  " << hindi << endl;
    }
};
void Exam ::setM(float m1, float m2)
{
    english = m1;
    hindi = m2;
}

class Result : public Exam
{

public:
    void print_Result(void)
    {
        cout << "The total marks Obtaine by Roll number  " << roll_number << " is " << ((physics) + (maths) + (english) + (hindi)) << "And the Percentage obtained by him is " << (((physics) + (maths) + (english) + (hindi)) * 100) / 400 << endl;
    }
};

// No
int main()
{
    Result m;
    m.set_roll_number();
    m.get_roll_number();
    m.setMarks();
    m.setM(12.33, 29.44);
    m.getMarks();
    m.print_Result();

    return 0;
}
