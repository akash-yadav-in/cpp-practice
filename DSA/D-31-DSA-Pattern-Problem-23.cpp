#include<iostream>
using namespace std;
/*
*************** What to achive in this pattern ********************
         

                      4 4 4 4 4 4 4
                      4 3 3 3 3 3 4
                      4 3 2 2 2 3 4    
                      4 3 2 1 2 3 4
                      4 3 2 2 2 3 4
                      4 3 3 3 3 3 4
                      4 4 4 4 4 4 4
       
               **** IMPORTANT QUESTION ****
           
*/                    
class Solution
{
public:
    void pattern22(int n)
    {

        for (int i = 0; i < 2*n-1; i++)
        {
         
          for (int j = 0; j < 2*n-1; j++)
          {
            int top = i;                     // The main logic here is that we are actually printing thr distance which is less after caluculating it from top bottom legt and right
            int down = (2*n-2) - i;         //   example  3 3 3 3 3  in this say i want to know the distance of 2 on the left side of 1 then from top its distance is 2 and bottom is also 2 and left distance is 1 and right dis is 3
            int left = j;                   //            3 2 2 2 3  now in the next step we took min of(min (top(2), bottom(2) , min (left)(1) , right(3)))
            int right = (2*n-2) - j;        //            3 2 1 2 3  minimum of top and bottom is 2 and of left and right is 1 now the min of this 2 and 1 will be 1
                                            //            3 2 2 2 3   after that we print n-(min(2 and 1)) in this case n  is 3 and so n-1 will get print and this is 2 and that's the logic here
                                            //            3 3 3 3 3
            cout<<(n - min(min(top , down) , min(left , right)));

          }
           cout<<endl;
        }
             
         
       

    }
};

int main()
{
    Solution c;
    c.pattern22(4);
    return 0;
}

