Problem: 566. Reshape the Matrix
Link: https://leetcode.com/problems/reshape-the-matrix/

Approach 1: 

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((mat[0].size())*(mat.size()) != r*c) return mat;
        vector<vector<int>> ans(r, vector<int> (c, 0));
        int m = 0, n = 0;
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {       
                if(n == c) {
                    m++;
                    n = 0;
                }
                ans[m][n] = mat[i][j];
                n++;
            }
        }
        return ans;
    }
};