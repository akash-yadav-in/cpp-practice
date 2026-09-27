#include<iostream>
#include<vector>
using namespace std;


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
