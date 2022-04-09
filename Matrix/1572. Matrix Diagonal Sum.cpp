Problem: 1672. 1572. Matrix Diagonal Sum
Link: https://leetcode.com/problems/matrix-diagonal-sum/

Approach 1:

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(i==j || i+j==mat.size()-1)
                {
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};


Approach 2:

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][n-i-1]+mat[i][i];
        }
        if(n%2==0)
        {
            return sum;
        }
        else{
            return sum-mat[(n-1)/2][(n-1)/2];
        }
}
};