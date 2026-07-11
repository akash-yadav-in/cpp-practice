#include<iostream>
using namespace std;

// Destructors
// 1. never takes an argument nor does it return any value
// 2.When a block of code it exited it helps in clearing the storage

int count = 0;

class num{
   
    public:
    num(){
        count ++;
        cout<<"This is the time when Constructor is called. "
        <<count<<endl;   
    }

    // This is How to make a Destructor |
    ~num() // We write tild ~ this sign and then num
    { 
       cout<<"This is the time when the destructor is called "<<count<<endl;
       count --;
    }

                                        
};                                      
int main(){
    cout<<"We are inside the main function "<<endl;
    cout<<"Creating First Object n1 "<<endl;
    num n1;
    // Here making a block , 
    // Means block ke inside whichever things are made will be destroyed when exiting the block
    // Linke in below block n2 and n3 is constructed and then destructed when exiting the block
    // But n1 is a function of mains and will not be destroyes when exitting the block
    {   cout<<"Entering This Block "<<endl;
        cout<<"Creating two more objects "<<endl;
        num n2;
        num n3;
        cout<<" Exiting This Block "<<endl;
    }

    cout<<"Back to main "<<endl;

   
return 0;
}
