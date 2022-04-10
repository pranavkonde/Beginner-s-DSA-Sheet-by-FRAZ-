Problem: 1380. Lucky Numbers in a Matrix
Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Approach 1:

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        vector<int>s;
        vector<int>k;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
             int mini=INT_MAX;
            for(int j=0;j<matrix[i].size();j++)
            {
                mini=min(matrix[i][j],mini);
            }
            v.push_back(mini);  
        }
         for(int j=0;j<m;j++)
        {
            int maxi=0;
            for(int i=0;i<n;i++)
            {
                maxi=max(matrix[i][j],maxi);
            }
            s.push_back(maxi);    
        }
        for(int i=0;i<v.size();i++)
        {   for(int j=0;j<s.size();j++)
                { //cout<<v[i]<<s[j]<<endl;
            
            if(v[i]==s[j])
            {k.push_back(v[i]);}
        }
        }
   return k;    
    }
};