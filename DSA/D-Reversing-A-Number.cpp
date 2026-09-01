#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
         
   we have to return if we have goen 123 we have to reverse and return 321
       
         
           
*/                    
class Solution {
public:
    int reverseNumber(int n) {
        int s = 0;
        int power = 1;
        int reversed = 0;
               
        while (n > 0)
        {
           s = n%10;
         
           reversed = reversed*10 +s;   // IMP logic for reversing digits
           
          n = n/10;
        }
        cout<<reversed;
       

    }
};

int main(){
    Solution c;
    c.reverseNumber(123);
   
    return 0;
}
