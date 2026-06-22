#include<iostream>
using namespace std;

struct employee
{
    int id;
    char Favchar;
    float salary;
    

};

// Union is use to only one thing at a time
//like at a time you can either use rice or pound or car at ne time only

union money
{
   int rice;
    char car;
    float pound;

};



int main(){
    
    struct employee Maddy;
    Maddy.id = 1;
    Maddy.Favchar = 'c';
    Maddy.salary = 1566;

    cout<<"The value of Maddy is :"<<Maddy.id<<endl<<"The value of Maddy is :"<<Maddy.Favchar<<endl<<"The value of Maddy is :"<<Maddy.salary<<endl;


    union money e; // IN all of the three you can use only one in union as the memory has been shared in all three and if you ask for e.car you will get garbage char 
    e.rice = 12;
    e.car = 'm';
    e.pound = 13.4;

    cout<<e.pound;


    
    
    

   
return 0;
}
