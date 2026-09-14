#include<iostream>
using namespace std;
class Solution{
public:
    void reverse(int arr[], int n)
    {
        int st = 0;
        int end = n-1;
        for (int i = 0; i <  n; i++)
        {
            while (st < end)
            {
                swap(arr[st] , arr[end]);
                st++;
                end--;
            }

            
            
        }
        for (int j = 0; j <  n; j++)
        {
            cout<<arr[j]<<" ";
        }
        
        

    }
};


int main(){
    Solution c;
    int arr[7] = {1 , 2 , 3, 4 , 5 , 7 , 2};
    c.reverse(arr , 7);
   
return 0;
}
