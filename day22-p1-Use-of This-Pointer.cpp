#include<iostream>
using namespace std;
class A{
    int a;
    public:
      void setdata(int a){
        this->a =a;  // Here "this" is a keyword which is a pointer which points to the object which invokes the member function
                     // we can also return*this;
      }

      void getdata(){
        cout<<"The value of a is "<<a<<endl;
      }
};

int main(){
    A c;
    c.setdata(2);
    c.getdata();
   
return 0;
}
