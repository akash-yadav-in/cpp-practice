#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) 
    {
        int n = nums.size()-1;
        sort(nums.begin() , nums.end());
        
        return nums[n];
    }
    
};
int main(){
    vector<int> nums = {3 , 3 , 6 , 1};
    Solution c;
    c.largestElement(nums);
    
   
return 0;
}
