#include <iostream>
using namespace std;
// DYNAMIC INTIALIZATION OF OBJECTS

class BankDeposit
{
    int principal;
    int years;
    float InterestRate;
    float ReturnValue;

public:
    BankDeposit() {}   // We defined constructors to intialize bd, and bd1 later
    BankDeposit(int p, int y, float r); // r can be like 0.04 etc
    BankDeposit(int p, int y, int r);   // Here r can be like 14 , 16 , etc

    void show(void);
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    InterestRate = r;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + r);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    InterestRate = float(r) / 100;
    ReturnValue = principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue*(1+InterestRate);
    }
}
void BankDeposit ::show(void)
{
    cout << "The Total return is " << ReturnValue
         << " When you invested " << principal << endl
         << "For " << years << " years " << endl;
}

int main()
{
    BankDeposit bd, bd1;
    int p, y;
    float r;
    int R;

    // below we took values from user and made bd bank deposit object
    
    // OBJECT 1
    cout << "Enter principal , years" <<endl
    <<"Enter rate as a decimal (e.g. 0.045 for 4.5%"<<endl;
    cin >> p >> y >> r;
    bd = BankDeposit(p, y, r);
    bd.show();

    // OBJECT 2
    cout << "Enter principal , years ,rate" << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit(p, y, R);
    bd1.show();
    

    return 0;
}
