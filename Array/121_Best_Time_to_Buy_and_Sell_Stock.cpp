/*
Source : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Problem : 
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.



*/

// Step 1 : Brute force

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int temp=0;
        int st = INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            if(p[i] <st){
                st = p[i];
            }
            temp = p[i] -st;
            if(ans<temp){
                ans = temp;
            }
            
        }
        return ans;
    }
};

// Step 2 : using min ans mas operation
int maxProfit(vector<int>& arr) {

        int maxPro=0,mn=INT_MAX;
        
        for(int i=0;i<arr.size();i++)
        { 
            mn=min(mn,arr[i]);
            maxPro=max(maxPro,arr[i]-mn);
         
        }
        return maxPro;
    }