/*
---------------    What to achieve -------------
if we are given say a number 121 we are extracting the numbers and checking wherther when we read it from left to right does it exactly remin same as the original number or not 
if it remain same then it is a pallindrome 
if not it is not a pllindrome


*/


#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int n) {
        int s = 0;
        int original_n = n;  // This step is important as we have stored the vlaue of n in oroginal_n int so that after the while loop runs the value of n gets destroyed and in palindrome we need to compared the reversed int with the original int
                             // that's why we did it this way
       
       
        int reverse = 0;
       

       
        while (n > 0)
        {
            s = n%10;
            reverse = reverse*10 + s;
            n = n/10;

        }
        if (reverse==original_n)
        {
            cout<<true;
        }
        else{
            cout<<false;
        }
       
    }
   
   
};

int main(){
    Solution c;
    c.isPalindrome(121);
   
    return 0;
}
