Problem: 1. Two Sum
Link: https://leetcode.com/problems/two-sum/

Approach 1:
	class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> abs;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    abs.push_back(i);
                    abs.push_back(j);
                }
            }
        }
        return abs;
    }
};   



Approach 2:
	class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> abs;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int sub=target-nums[i];
            if(mp.find(sub)!=mp.end())
            {
                abs.push_back(i);
                abs.push_back(mp[sub]);
                break;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return abs;
        }
};
