#include<iostream>
using namespace std;
class Solution {
/*
------------ What to achive we have to chcek that whther the array is sorted or not without using the vector 


*/
public:
    bool arraySortedOrNot(int arr[], int n) 
    {
        int start = arr[0];
        bool x = true;
        for (int i = 0; i <n-1 ; i++)
        {
            if (start < arr[i+1])
            {
                start++;
            }
            else
            {
                x = false;
                break;
            }
           
            
        }
        return x;
        

    }
};


int main(){
    Solution c;
    int arr[] = {1 , 2 , 3 , 4 , 5};
    c.arraySortedOrNot(arr , 5);
    
    
   
return 0;
}
