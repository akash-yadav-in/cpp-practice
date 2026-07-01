#include <iostream>
using namespace std;
#include <string>
// REVISION OF LAST CLASSES IN THE END //




class binary
{
    string d;

public:
    void read(void);    // And This Is Function 1
    void chk_bin(void); // AND THIS Is Function 2
    void ones_compliment(void); // And This Is Function 3
    void display(void); // And This Is Function 4
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> d;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < d.length(); i++)
    {
        if (d.at(i) != '0' && d.at(i) != '1')
        {
            cout << "Incorrect Binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < d.length(); i++)
    {
        if (d.at(i) == '0')
        {
            d.at(i) = '1';
        }

        else if (d.at(i) == '1')
        {
                 d.at(i) = '0';
        }
    }
}

void binary ::display(void)
{    
    cout<<"Displaying your binary number "<<endl;
    for (int i = 0; i < d.length(); i++)
    {
        
        cout<<d.at(i);
        
    }
    cout<<endl;
}





int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    

    return 0;
}

// **** revision ******
/* **** OPPS - CLASSES AND OBJECTS
   **** CLASS ---> EXTENSIONS OF STRUCTURES WITH NEW FEATURES LIKE PRIVATE AND PUBLIC WHICH WAS NOT AVAILABLE IN STRUCTURES
   **** LIMITATION OF STRUCTURES
           |----> MEMBERS WERE PUBLIC
           |----> YOU CANNOT WRITE METHODS

   ****  maddy.salary = 8 makes no sens as it was private
   ****  we use setData for these values */

