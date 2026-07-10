#include<iostream>
using namespace std;

class Simple{
     int data1;
     int data2;
     public:
     Simple(int a, int b = 9){ // Constructors using default arguments
        data1 = a;
        data2 = b;
     }
     void print();

     
};

void Simple ::print(void){
    cout<<"The values are "<<data1<<" and "<<data2<<endl;
}

int main(){
    Simple p(2); // Here if we have not declared the value of b then it will print the default value that is  = 9
    p.print();

   
return 0;
}
