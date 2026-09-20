#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int search(vector<int> &nums, int target)
    {
        int size = nums.size();
        
        for (int i = 0; i < size; i++)
        {
            
            if (nums[i]==target)
            {
               cout<<i;
               break;
            }
            if (nums[size-1]!=target)
            {
                cout<<-1;
                break;
            }
            
            
        }

        
    }
};

int main(){
    vector<int> nums = {-1 , 0 , 3 , 5 , 9 , 12};
    Solution c;
    c.search(nums ,  2 );
   
return 0;
}
