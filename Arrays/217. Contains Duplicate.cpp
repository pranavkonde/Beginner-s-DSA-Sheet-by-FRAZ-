Problem 217. Contains Duplicate
Link:  https://leetcode.com/problems/contains-duplicate/

Approach 1:

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }
        return false;
    }
};


