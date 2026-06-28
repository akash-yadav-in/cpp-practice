#include<iostream>
using namespace std;

// USE OF CLASSES

class Employee
{
    private :
      int a, b, c;

    public:
      int d,e;
    void setData(int a1 ,int b1, int c1); // Declared that we will be making a setData Function but it note gauranteed 
    void getData(){                       // and the compiler wil try to search that 
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
        
    }
};

  // Here we tell employee that we made a setdata function here

  void Employee :: setData(int a1, int b1, int c1){   // And this is how we make a SetData function and write it
    a=a1;
    b=b1;
    c=c1;
}

class Animal
{
   private :
    float d ,f, g;

    public:
    float z ,x, c;
    void setData(float a1 , float b1 , float c1);
    void getData(){
    cout<<"The character of d is "<<d<<endl;
    cout<<"The character of f is "<<f<<endl;
    cout<<"The character of g is "<<g<<endl;
    cout<<"The character of z is "<<z<<endl;
    cout<<"The character of x is "<<x<<endl;
    cout<<"The character of c is "<<c<<endl;




    }

};
void Animal :: setData (float a1 , float b1 , float c1 ){

    d=a1;
    f=b1;
    g=c1;
}

int main(){
    Employee maddy;
    maddy.d = 34;
    maddy.e = 45;
    maddy.setData(1,2,4);
    maddy.getData();
    // maddy.a =23;  this will give erroe as a is private
   
    Animal dog;
    dog.z = 12.3;
    dog.x = 199.2;
    dog.c = 133.34;
    dog.setData(124.2 , 1233.3 , 156.3 );
    dog.getData();

return 0;
}
