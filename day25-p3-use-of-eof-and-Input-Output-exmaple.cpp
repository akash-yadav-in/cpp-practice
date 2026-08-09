#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    // In write function
    ofstream out;
    out.open("sample60.txt"); // This wil open the file using the 2nd methos member funstion
    out << "This is me admin" << endl;
    out << "Welcome to the chat" << endl;
    out.close();

    // In read function
    string p;
    ifstream in;
    in.open("sample60.txt");

    // in >> p>>a;  THIS IS ONE WAY OF GETTING THE CONTENS OF THE FILE

    // WE can Use While loop also to get the content of the file

    while (in.eof() == 0) // in.eof== end of line jabtak 0 hai tabtak getline chalte rehna chaoye aour cout bhi tabtak chalna chaiye
    {
        getline(in, p);
        cout << p << endl;
    }

    in.close();

    return 0;
}
