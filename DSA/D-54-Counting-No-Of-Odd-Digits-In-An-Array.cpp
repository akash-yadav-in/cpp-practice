#include<iostream>
using namespace std;
/*
-------------- What to achive in this problem is that 
we have to count the number of odd digits in the array given we do so by checking that if that umber is divible by 2 will be even and if that is not divisivle will be odd number 

*/
class Solution{
public:
    int countOdd(int arr[], int n)
    {
        int odd_counter = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2!=0)
            {
                odd_counter++;
            }
            
        }
        return odd_counter;
        
          
    }
};


int main(){
    Solution c;
    
    int arr[] = {1 , 2 ,1 ,1 ,5 , 1};
    cout<<c.countOdd(arr , 6)<<endl;
   
return 0;
}
