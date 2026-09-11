#include<iostream>
#include<vector>

using namespace std;
/*
---------------- What to achieve -----------------
So we are writing a program that Help in Buying and selling the Stock
like there is a prices array of say company x prices were = {7 , 1 , 3 , 6 , 4} so this we have to do so that max profit can be made

NOTE:----> BUYING AND SELLING DAY HAS TO BE DIFFERENT IT CANNOT BE THE SAME DAY
AND SELLING DAY WILL ALWAYs HAVE TO BE IN FUTURE.
Also we have to return 0 is max profit cannot be achieved like buying at max price and selling at least price

APPRAOACH HERE IS TO IMAGINE EVERY DAY IS A SELLING DAY
*/

void max_profit(vector<int> & prices){
    int max_profit = 0;
    int best_buy = prices[0];
    int n = prices.size();
    for (int i = 1; i < n; i++)
    {
        best_buy = min(prices[i] , best_buy); // here we are telling the program that ki agar  prices[i] index per  and best buy mein jo sabse less ho usse update karke best buy ki value bana do isse we will GET THE LEAST VALUE WEHRE WE CAN BUY THE STOCK
        if (prices[i] > best_buy) // We are checking ki agar prices[i] index per bigger then best_buy then we can get the profit andthen 
        {
            max_profit = max((max_profit ), (prices[i] - best_buy));                                  // update the value of max_profit and that is equal to max(of older max_profit and the new difference of prices[i] at index i and best_buy)
            // update the value of max_profit and that is equal to max(of older max_profit and the new difference of prices[i] at index i and best_buy)

        }
        
       
        
        
        
    }
    cout<<max_profit<<endl;
    

}

int main(){
    vector<int> prices = {7 , 1 ,5 ,  3 , 6 ,4};
    max_profit(prices);
   
return 0;
}
