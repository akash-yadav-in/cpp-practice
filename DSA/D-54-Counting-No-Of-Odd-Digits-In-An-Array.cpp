#include<iostream>
using namespace std;
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
