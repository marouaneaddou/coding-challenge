


# include <iostream>
# include <vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mxProfit = 0;
        int buy_day = 1;
        for ( int i = 1; i < prices.size(); i++ ) {
            if ( prices[i] < prices[buy_day - 1] ) buy_day = i + 1;
            else if ( prices[i] >= prices[buy_day - 1] ) mxProfit = max( prices[i] - prices[buy_day - 1], mxProfit );
        }
        return mxProfit;
    }
};
