#include<iostream>
using namespace std;

/* Mutiple Inheritance Deep

   ::: ----> SYNTAX --> 
   class derived : visibility_mode base 1, visibility_mode base 2
  {  
   class body
  };  
  
*/
class base1{
  protected:
   int z;
  public:
  void setBase1(int m){
    z = m;
   }
};

class base2{
  protected:
   int b;
  public:
  void setBase2(int x){
    b = x;
   }
};

class derived : public base1 , public base2 {
  public:
  void Display(void){
    cout<<"The value of z is "<<z<<" and of b is "<<b<<endl;
    cout<<"The sum is  "<<(z + b)<<endl;
  }
  


};



int main(){

  derived x;
  x.setBase1(2);
  x.setBase2(6);
  x.Display();
   
return 0;
}
