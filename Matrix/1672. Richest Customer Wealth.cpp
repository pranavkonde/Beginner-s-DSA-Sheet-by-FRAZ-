Problem: 1672. Richest Customer Wealth
Link: https://leetcode.com/problems/richest-customer-wealth/

Approach 1:

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
                if(sum>=maxi)
                {
                    maxi=sum;
                }
            }
        }
        return maxi;
    }
};