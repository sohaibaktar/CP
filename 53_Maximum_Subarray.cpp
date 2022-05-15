#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
 /*

many qs come from this.
1. Kadane's Algorithm 
2. Largest Sum Contiguous Subarray




Algorithm: 
    Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far




 */

 
class Solution {
public:
int func(vector<int>& nums) {
    // main formula
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
int main(){

    int n;
    cin>> n;
    vector<int> v(n);
    for (int i = 0; i <n ; i++)
    {
        int ele ;
        cin >>ele;
        v.push_back(ele);
    }
    Solution s;
    
    cout << s.func(v);
}