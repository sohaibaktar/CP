/*
Given an integer array nums, find the 
subarray
 which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so = INT_MIN;
       int max_end = 0;
       int n = nums.size();
       
       for (int i = 0; i <n ; i++)
       {
                max_end = max_end + nums[i];
                if(max_so<max_end){
                    max_so = max_end;
                }
                if(max_end <0){
                    max_end =0;
                }
       }
       return max_so;
    }
};