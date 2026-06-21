#include<iostream>
#include<iomanip>
using namespace std;

int main (){
    
    // Use of Constant 
    const int a = 3;

    cout<<a<<endl;


    // Use of Manipulator ===> Shows How Data Is Displayed  like endl
    int b = 4;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of b is :"<<setw(3)<<b<<endl;
    cout<<"The value of b is :"<<setw(2)<<b<<endl;
    cout<<"The value of b is :"<<setw(1)<<b<<endl;

    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of b is :"<<b<<endl;

    // OPERATOR PRECEDENCE 

    int s=4, j=6, l=7;
    int t = ((((s*3) -j)+ l)+45);
    cout<<"The Value Of T is : "<<t<<endl;

    




    return 0;
}
