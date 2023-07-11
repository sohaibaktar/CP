
class Solution {
public:
    int bs(vector<int> &nums, int low,int high, int target){
    // base case
    if(low> high) return -1;

    int mid = (low+high)/2;
    if(nums[mid] == target) return mid;
    else if(target >nums[mid])
        return bs(nums,mid+1,high,target);
    else
        return bs(nums, low ,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
          int n = nums.size();
    
        int ans = bs(nums,0,n-1,target);
        return ans;
    }
};
//TC-->O(logn)
//SC-->O(logn)