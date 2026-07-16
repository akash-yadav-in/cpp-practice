#include <iostream>
using namespace std;

// Virtual Base Class Example
//                         |-------------------> TEST--------|
//    STUDENT--------------|                                 |======> RESULT
//                         |-------------------> SPORTS------|
class Student
{
protected:
    int roll_no;
    int a;

public:
    int setRoll_number()
    {

        cout << "Enter The Roll Number " << endl;
        cin >> a;
        roll_no = a;
    }

    void print()
    {
        cout << "Your Roll Number is " << roll_no << endl;
    }
};

// SYNTAX FOR VIRTUAL CLASS HERE WE ARE MAKING STUDENT AS VIRTUAL CLASS
// SYNTAX== class derived : virtual visibility_mode Base class
//                     or :   public virtual

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_Marks()
    {
        cout << "Enter the marks in Maths " << endl;
        cin >> maths;
        cout << "Enter the marks in Physics " << endl;
        cin >> physics;
    }

    void Print_Marks()
    {
        cout << "Your marks in : " << endl
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void Sport_marks()
    {
        cout << "Enter the Score in Sports " << endl;
        cin >> score;
    }

    void print_Score(void)
    {
        cout << "You Sports score :" << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void FinalResult(void)
    {
        total = (maths + physics + score);
        print();
        Print_Marks();
        print_Score();
        cout << "Your Total score : " << total << endl;
    }
};

int main()
{
    Result c;
    c.setRoll_number();
    c.set_Marks();
    c.Sport_marks();
    c.FinalResult();

    return 0;
}
