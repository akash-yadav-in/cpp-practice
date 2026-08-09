#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // Below we have used functions that Take your name as input and update that in the selcted text file
    ofstream a("sample60.txt"); // Here we are connecting the file with this stream here data flow from this program to the file
    string name;
    cout << "Enter Your Name" << endl;
    cin >> name;

    a << name; // Here this means that this function will write your name in that text file
    a.close(); // Here we have closed the stream

    // Now if we want to Read what are the contents of text file then we use below functions
    ifstream b("sample60.txt");
    string show;
    b >> show;
    getline(b, show);
    cout << "The content in the file is ---->" << endl
         << show << endl;
    b.close();

    return 0;
}
