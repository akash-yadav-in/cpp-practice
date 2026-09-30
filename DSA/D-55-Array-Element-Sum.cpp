#include<iostream>
using namespace std;
class Solution{
public:
	int sum(int arr[], int n) 
    {
        int sum_arr = 0;
        for (int i = 0; i < n; i++)
        {
            sum_arr+=arr[i];
        }
        return sum_arr;
        
	  
	}
};

int main(){
    int arr[] = {1 , 2 , 1 , 1 , 5 , 1};
    Solution c;
    
    cout<<c.sum(arr , 6)<<endl;

   
return 0;
}
