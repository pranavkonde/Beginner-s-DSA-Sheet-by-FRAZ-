Problem 121. Best Time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


Approach 1:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int max_profit=prices[j]-prices[i];
                if(max_profit>profit)
                {
                    profit=max_profit;
                }
            }
        }
        if(profit>0)
        {
            return profit;
        }
        else
        {
            return 0;
        }
    }
};





Approach 2: Kadanes Algorithm

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int p=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            p=prices[i]-mini;
            ans=max(p,ans);
            mini=min(prices[i],mini);
        }
        return ans;
    }
};


