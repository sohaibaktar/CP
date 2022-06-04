/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to targe

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> tmp;
    for (int i = 0; i < nums.size(); ++i) {
      if (tmp.count(target - nums[i])) {
        return {tmp[target - nums[i]], i};
      }
      tmp[nums[i]] = i;
    }
    return {-1, -1};
    
    
    }
};