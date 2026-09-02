#include<iostream>
#include<vector>
using namespace std;

/*
                        ----- WHAT TO ACHIEVE ----
                RETURN PAIR IN SORTED( EITHER ASCENDING OR DESCENDING ORDER ) ARRAYWITH TARGET SUM
                           USING TWO POINTER APPROACH

*/

vector<int> PairSumUsing_two_pointers(vector<int> &arr){
    vector<int> vec;
    vector<int> ans;
    int target = 26;
    int n = arr.size();
    int start = 0;
    int end = 3;
    for (int i = 0; i < n ; i++)
    {
      if (arr[start]+arr[end]> target)
      {
        end--;
      }
      else if (arr[start]+arr[end]< target)
      {
        start++;
      }
      else if (arr[start]+arr[end]== target)
      {
        vec.push_back(start);
        vec.push_back(end);
        return vec;
      }
      
      
      
    }

    return ans;

}

int main(){
    vector<int> arr  = {2 , 7 , 11 , 15};
    PairSumUsing_two_pointers(arr);

    vector<int> vec = PairSumUsing_two_pointers(arr);
    cout<<vec[0]<<", "<<vec[1];

    
return 0;
}
