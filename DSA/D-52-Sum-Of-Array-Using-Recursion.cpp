#include<iostream>
#include<vector>
using namespace std;
/*
====== What to achive in this problem is that we have to solve the problem of suming of all the element of the array without using the loop we have to use recurssion to solve it 


*/


class Solution{	
	public:
		int arraySum(vector<int>& nums)
        {
            int sum = 0;
           
            if (nums.size() == 0)
            {
                return 0;
            }
            
            sum+=nums[nums.size()];
            
            return sum , arraySum(nums);
			
		}
};

int main(){
    vector<int> nums = {1 , 2 , 3};
    Solution c;
    c.arraySum(nums);
   
return 0;
}
