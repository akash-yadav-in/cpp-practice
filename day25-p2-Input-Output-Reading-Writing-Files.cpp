#include <iostream>
#include <fstream>

/*  Useful classed for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase


In order to work with files in c++
 There are 2 ways to open a file
 1. Using the constructor
 2. Using the Member function open() of the class

*/

using namespace std;

int main()
{

    // Opening files using constructor
    // Say we want to open a file name sample60.txt files
    ofstream out("sample60.txt"); // this way we have opened the file

    // Write operation
    string ss = "Welcome to Earth";
    out << ss; // So this will write Welcome to Earth in that file

    // How we will read from the same file Sample60.txt
    ifstream in("sample60.txt");
    in >> ss;
    cout << ss << endl;

    // Say we have made another file Sample60b.txt and from this we want to read somthing then
    ifstream er("sample60b.txt");
    string gh; // So we will take that content from the file in a string and will display it
    // er>>gh; // From running this we
    getline(er, gh); // This will print the first line and if we use it again and again it will print 2 , 3 lines also
                     // er------> took content from sample60b.txt--------> and gave it in string gh.

    cout << gh << endl; // Frmo this only Hi will come but if we want to cout the full line then we use below command

    return 0;
}
