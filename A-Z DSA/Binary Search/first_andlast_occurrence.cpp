class Solution {
public:
    int firstPosition(vector<int> nums,int n,int x){
        int low =0, high = n-1;
        int ans =-1;
        while(low <= high){
            int mid = (low+high)/2;

            if(nums[mid] == x){
                ans = mid;
                high = mid-1;
            }else if(nums[mid] < x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
    int lastPosition(vector<int> nums,int n,int x){
        int low =0, high = n-1;
        int ans =-1;
        while(low <= high){
            int mid = (low+high)/2;

            if(nums[mid] == x){
                ans = mid;
                low = mid+1;
            }else if(nums[mid] > x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        int ans1 = firstPosition(nums,n,target);
        v.push_back(ans1);
        int ans2 = lastPosition(nums,n,target);
        v.push_back(ans2);
        return v;
    }
};