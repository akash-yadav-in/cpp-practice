#include<iostream>
using namespace std;

class Base{            // Objective here is that we want ( int a) to be PRIVATE but also it can be inherited 
    protected:      // without making ( int a )  public --- we can do this by using protected 
      int a;          // protected meaning that int a is a private varible that can be inherited
    private:
      int b;

};

/* For a Protected Member:
                         [Public derivation]      [Private derivation]        [Protected derivation]        
 Private: members ----->   Not Inherited               Not Inherited                Not Inherited
 Protected: members --->   Protected                   Private                      Protected
 Public: members------->   Public                      Private                      Protected


  */






class derived : public Base{      

};

int main(){

    derived m;
    // cout<<m.a ; we cannot directly print a protected or a private one but can only print directly on if it is public function and the inherited class is derived publically
   
return 0;
}
