#include<iostream>
using namespace std;
/*
Here we have to achieve that we are given and array we  have to find the sum of all the elements of the array and using that we have to find the toatal element sum.


*/
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
