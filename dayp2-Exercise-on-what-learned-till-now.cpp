#include <iostream>
using namespace std;

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

int main()
{
    Simple_Calculator x;

    x.choice();
    x.choiceStore();
    x.Calculation_Choice();
    x.result();

    return 0;
}
