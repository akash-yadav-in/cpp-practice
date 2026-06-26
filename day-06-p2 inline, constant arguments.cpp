#include<iostream>
using namespace std;

// Use of INLINE FUNCTION 
  float division (float a , float b){

    static int c = 0; // This executes only once

    c = c+4; // Next time when the funtion run, the value of c will be retained
            // means initially c = 4 , next c = 8 , next c = 12----- so on
     
    return ( a /  b) +c ;
}


// Defualt argument like we made factor=1.04 and default argument should be written otherwise it will give error
// compulsary argument in left
float moneyEarned(float currentMoney , float factor=1.04){

    return currentMoney*factor;
}

//Constant Argument
int strlen(const char *p){}

int main(){
    int m , n, money;
    cout<<" Enter The Value of M and N "<<endl;
   cin>>m>>n;
   cout<<"The division of M and N is "<<division( m, n)<<endl;
   cout<<"The division of M and N is "<<division( m, n)<<endl;

   
   
   
   // Here is it output
   cout<<"Enter the money you want to deposit "<<endl;
   cin>>money;
   cout<<"Total Money Earned is : "<<moneyEarned(money)<<endl;
   cout<<"Total Money Earned For VIP : "<<moneyEarned(money, 1.1)<<endl;

 
return 0;
}
