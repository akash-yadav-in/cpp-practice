#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265

// Exercise ----- On What Learned Till Now

class Simple_Calculator
{
public:
    int a;
    float z, b, c, x;

    void choice(void)
    {

        cout << "Choose the options from below " << endl;
        cout << "1. Addition " << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Mutiplication " << endl;
        cout << "4. Division " << endl;
        cout << "Choose from 1 , 2 , 3 , 4" << endl;
        cin >> a;
    }

    void choiceStore(void)
    {
        if (a < 1 || a > 4)
        {
            cout << "Invalid option" << endl;
            exit(0);
        }
        cout << "Enter First number " << endl;
        cin >> b;
        cout << "Enter Second number " << endl;
        cin >> c;
    }

    int Calculation_Choice();

    void result(void)
    {
        if (a == 1 or a == 2 or a == 3)
        {
            cout << "The Final Result is " << x << endl;
        }
        else if (a == 4)
        {
            cout << "The Final Result is " << z << endl;
        }
    }
};

int Simple_Calculator ::Calculation_Choice(void)
{
    if (a == 1)
    {
        x = (b + c);
        return x;
    }

    if (a == 2)
    {
        x = (b - c);
        return x;
    }
    if (a == 3)
    {
        x = (b * c);
        return x;
    }
    if (a == 4)
    {
        z = (b / c);
        return z;
    }
}

class ScientificCal
{
    int k, l;

public:
    void input()
    {
        cout << "Enter the First Number " << endl;
        cin >> k;
        cout << "Enter the Second Number " << endl;
        cin >> l;
    }

    void Opertations(void)
    {
        cout << "The value of sin" << (k + l) << " degrees is " << sin((PI * (k + l)) / 180) << endl;
        cout << "The value of cos" << (k + l) << " degrees is " << cos((PI * (k + l)) / 180) << endl;
        cout << "The value of tan" << (k + l) << " degrees is " << tan((PI * (k + l)) / 180) << endl;
        cout << "The value of exp" << (k + l) << " is " << exp(k + l) << endl;
    }
};

class Hybrid_Cal : public Simple_Calculator, public ScientificCal
{
public:
    void Result_Display()
    {

        Simple_Calculator ::choice();
        Simple_Calculator ::choiceStore();
        Simple_Calculator ::Calculation_Choice();
        Simple_Calculator ::result();

        ScientificCal ::input();
        ScientificCal ::Opertations();
    }
};

int main()
{
    Simple_Calculator x;

    x.choice();
    x.choiceStore();
    x.Calculation_Choice();
    x.result();

    ScientificCal v;
    v.input();
    v.Opertations();

    Hybrid_Cal j;
    j.Result_Display();

    return 0;
}
